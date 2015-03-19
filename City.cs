using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace City
{
    public class LongRandom
    {
        private static Random rand = new Random(2); 
        public  long Next(long min, long max)
        {
            long result = rand.Next((Int32)(min >> 32), (Int32)(max >> 32));
            result = (result << 32);
            result = result | (long)rand.Next((Int32)min, (Int32)max);
            return result;
        }
        public  long Next(long max)
        {
            return Next(0, max);
        }

    }


    public class Man
    {
        static private Random rnd = new Random(1);

        public string name;
        public long id ;
        public SortedDictionary<long, long> friends = new SortedDictionary<long,long>();
        private string vowels = "уеыаоэяию";
        private string consonant = "йцкнгшщзхфвпрлджчсмтб";

        public Man(long id)
        {
            this.id = id;
            int qqq = rnd.Next(2, 6);
            this.name = "";
            while (qqq > 0)
            {
                this.name += consonant.Substring(rnd.Next(consonant.Length), 1) ;
                this.name += vowels.Substring(rnd.Next(vowels.Length), 1);
                qqq--;
            }
        }
        public void AddFriend(long friendId)
        {
            friends[friendId] = friendId;
        }
    }
    class Program
    {
        static private LongRandom rnd = new LongRandom();
        public static Man[] people = new Man[Npeople];
        public const uint Nfriends = 5;
        public const long Npeople = 3000;
        public uint id = 1;
        static void Main(string[] args)
        {
            // make people
            for (long i = 0; i < Npeople; i++)
            {
                people[i] = new Man(i);
            }
            // make friends
            for (long i = 0; i < Npeople; i++)
            {
                for (int j = 0; j < Nfriends; j++)
                {
                    long x=i;
                    while (x == i)
                    {
                        x = rnd.Next(Npeople);
                    }
                    people[i].AddFriend(x);
                    people[x].AddFriend(i);

                }
           }

/*
            foreach (Man m in people)
            {
                Console.WriteLine(m.name);
                foreach( KeyValuePair<long, long> p  in m.friends)
                {
                    Console.WriteLine("\t " + people[p.Value].name);
                }
            }
            */

            SortedDictionary<long, long>[] f = new SortedDictionary<long, long>[20];

            f[0] = new SortedDictionary<long, long>();
            f[0][0] =0 ;
            Console.WriteLine(new string('\t', 0) + people[0].name);


            for(int orderFrienship = 1; orderFrienship < 20; orderFrienship++)
            {
                f[orderFrienship] = new SortedDictionary<long, long>();

                //перебираем id друзей 0-го порядка
                foreach (KeyValuePair<long,long> pair in f[orderFrienship - 1])
                {
                    //перебираем друзей человека  ID
                    foreach (KeyValuePair<long, long> p in people[pair.Value].friends)
                    {
                        bool foundBefore = false;
                        for (int delFriend = 0; delFriend < orderFrienship; delFriend++)
                        {
                            foundBefore = foundBefore || f[delFriend].ContainsKey (p.Value);
                        }
                        if (!foundBefore)
                        {
                            f[orderFrienship][p.Value] = p.Value;
                        }
                    }
                }

                if (f[orderFrienship].Count == 0)
                {
                    break;
                }

                foreach (KeyValuePair<long,long> pair in f[orderFrienship])
                {
                    Console.WriteLine(new string('\t', orderFrienship) + people[pair.Value].name);
                }
            }
            /*
            List<long> f0 = new List<long> { 0 };
            foreach (long id in f0)
            {
                Console.WriteLine(new string('\t',0) + people[id].name);
            }

            List<long> f1 = new List<long>();

            //перебираем id друзей 0-го порядка
            foreach (long id in f0)
            {
                //перебираем друзей человека  ID
                foreach (KeyValuePair<long, long> p in people[id].friends)
                {
                    f1.Add(p.Value);
                }
            }


            foreach (long id in f1)
            {
                Console.WriteLine(new string('\t',1) + people[id].name);
            }

            List<long> f2 = new List<long>();

            //перебираем id друзей 0-го порядка
            foreach (long id in f1)
            {
                //перебираем друзей человека  ID
                foreach (KeyValuePair<long, long> p in people[id].friends)
                {
                    f2.Add(p.Value);
                }
            }


            foreach (long id in f2)
            {
                Console.WriteLine(new string('\t', 2) + people[id].name);
            }
             * */
        }
    }
}
