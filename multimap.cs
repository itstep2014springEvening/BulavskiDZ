using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication3
{
    class MyMultimap
    {
        SortedDictionary<string, List<string>> tree = new SortedDictionary<string, List<string>>();

        public void Add(string k, string v)
        {
            
            if (tree.ContainsKey(k) == false )
            {
                tree[k] = new List<string>();
            }
            tree[k].Add(v);
        }
        public void RemoveFirst()
        {
           if(tree.First().Value != null)
           {
               tree.First().Value.Remove(tree.First().Value.First());
           }
        }
        public string First()
        {
            return tree.First().Value.First();
        }


    }
    class Program
    {

        static void Main(string[] args)
        {
            MyMultimap z = new MyMultimap();
            z.Add("Brest", "987654");
            z.Add("Brest", "98434");
            z.Add("Minsk", "987654");
            Console.WriteLine(z.First());



        }
    }
}
