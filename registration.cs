using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace registration
{
    public class Fizlico
    {
        static private Random rnd = new Random(1);

        private static int lastPass = 0;
        public readonly string name;
        public readonly int passNum;

        private string vowels = "уеыаоэяию";
        private string consonant = "йцкнгшщзхфвпрлджчсмтб";

        public Fizlico()
        {
            passNum = lastPass++;
            int qqq = rnd.Next(2, 6);
            this.name = "";
            while (qqq > 0)
            {
                this.name += consonant.Substring(rnd.Next(consonant.Length), 1);
                this.name += vowels.Substring(rnd.Next(vowels.Length), 1);
                qqq--;
            }
        }
    }
    public delegate string TaxPayerRegistration(TaxPayer p, Fizlico f);

    public class Registrator
    {
        static public event TaxPayerRegistration onIP;
        Dictionary<int, TaxPayer> payers;
        Dictionary<Fizlico, List<string>> message = new Dictionary<Fizlico, List<string>>(); 
        private static Registrator instance;
        static Registrator()
        {
            onIP += new TaxPayerRegistration(Nalogovaya.Register);
            onIP += new TaxPayerRegistration(FSZN.Register);
            onIP += new TaxPayerRegistration(Minjust.Register);
            //
            //
            //
            //

        }
        private Registrator()
        {
            payers = new Dictionary<int, TaxPayer>();
        }
        public static Registrator Instance
        {
            get
            {
                if (instance == null)
                {
                    instance = new Registrator();
                }
                return instance;
            }
        }
        public TaxPayer ApplyForIP(Fizlico applier)
        {
            // check if already registered
            IP ip = new IP(applier.name);
            // add him to the payers list


            onIP(ip, applier);
            return ip;
        }
        public TaxPayer ApplyForFirm(Fizlico applier, string name)
        {
            //
            Firm f = new Firm(name);
            //
            return f;
        }

        public List<string> GetDocuments(Fizlico f)
        {
            
            if(message.ContainsKey(f))
            {
                return message[f];
            }
            return null;

            /*foreach(KeyValuePair<Fizlico, string> d in message)
            {
                
            }
            return new List<string>();*/
        }
        public void SendMessage(Fizlico f, string s)
        {
            if (!message.ContainsKey(f))
            {
                message[f] = new List<string>();
            }
            message[f].Add(s);
        }
        
    }
    class Nalogovaya
    {

        static public string Register(TaxPayer p, Fizlico f)
        {
            string x = String.Format("{0} registered as a tax payer in Nalogovoya", p.name);
            //Console.WriteLine(x);
            Registrator.Instance.SendMessage(f, x); 

            return x;
        }
    }
    class FSZN
    {
        static public string Register(TaxPayer p, Fizlico f)
        {
            string x = String.Format("{0} registered as a tax payer in FSZN", p.name);
            //Console.WriteLine(x);
            Registrator.Instance.SendMessage(f, x);

            return x;
        }
    }
    class Minjust
    {
        static public string Register(TaxPayer p, Fizlico f)
        {
            string x = String.Format("{0} registered as a tax payer in Minjust", p.name);
            //Console.WriteLine(x);
            Registrator.Instance.SendMessage(f, x);

            return x;
        }
    }
    public class TaxPayer
    {
        public readonly string name;
        public TaxPayer(string name)
        {
            this.name = name;
        }

    }


    class IP : TaxPayer
    {

        public IP(string name) :
            base(name)
        {
        }
    }
    class Firm : TaxPayer
    {
        public Firm(string name) :
            base(name)
        {
        }

    }

    class Program
    {
        static void Main(string[] args)
        {
            
            FSZN f = new FSZN();
            Minjust m = new Minjust();
            Nalogovaya n = new Nalogovaya();
            Fizlico vip = new Fizlico();

            Registrator.Instance.ApplyForIP(vip);
            List<string> l = Registrator.Instance.GetDocuments(vip);
            foreach (string s in l)
            {
                Console.WriteLine(s);
            }
        }
    }
}
