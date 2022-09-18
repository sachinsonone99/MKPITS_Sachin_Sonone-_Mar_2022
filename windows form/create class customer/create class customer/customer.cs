using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace create_class_customer
{
    internal class customer
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public customer(int id, string name)
        {
            Id = id;
            Name = name;
        }
    }
}
