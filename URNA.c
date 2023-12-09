using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;

namespace URNA
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string UserName , SobreNome ,ADM , estado ;
            int RG, idade, nCandidato , nCandidato2,nCandidato3, voto;
           
            
            nCandidato = 22;
            nCandidato2 = 13;
            nCandidato3 = 19;

            
            Console.Title = "URNA BRASIL";
            Console.WriteLine("Bem vindo a Urna Brasil!");
            Console.WriteLine("Lista de Candidatos:\n");
            Console.WriteLine("22 - Pipoquita , 13 - Federal DO Povo , 19 - Padroca \n");
            Console.WriteLine("Digite seu PRIMEIRO  e SEGUNDO nome , RG , Idade e Estado , separados por espaço:\n");
            string[] vet = Console.ReadLine().Split(' ');
           
            UserName = vet[0];
            SobreNome = vet[1];
            RG = int.Parse(vet[2]);
            idade = int.Parse(vet[3]);
            estado = vet[4];
            
            if (idade > 15)
            {
                Console.WriteLine("Muito bem,vamos prosseguir digite o numero do seu candidato:\n");
                voto = int.Parse(Console.ReadLine());
                Console.Write("\n");
               
                if (voto == nCandidato)
                {
                    Console.WriteLine("Muito bem! seu voto foi para: " + nCandidato + " Pipoquita");
                    Console.Beep();
                    Console.WriteLine("Voto compudado com sucesso!\n");
                    Console.WriteLine("SEU COMPROVANTE!");
                    Console.WriteLine("Cidadão: " + UserName + " " +SobreNome);
                    Console.WriteLine("Portador do RG: " + RG);
                    Console.WriteLine("Idade: " + idade);
                    Console.WriteLine("Local de votação: " + estado);
                    Console.WriteLine("Votou em: " + nCandidato);
                    Console.WriteLine("\n");

                }
                else if (voto == nCandidato2)
                {
                    Console.WriteLine("Muito bem! seu voto foi para: " + nCandidato2 + " Federal DO Povo");
                    Console.Beep();
                    Console.WriteLine("Voto computado com sucesso!\n");
                    Console.WriteLine("SEU COMPROVANTE!");
                    Console.WriteLine("Cidadão: " + UserName+" "+SobreNome);
                    Console.WriteLine("Portador do RG: " + RG);
                    Console.WriteLine("Idade: " + idade);
                    Console.WriteLine("Local de votação: " + estado);
                    Console.WriteLine("Votou em: " + nCandidato2);
                    Console.WriteLine("\n");

                }
                else if (voto == nCandidato3)
                {
                    Console.WriteLine("Muito bem! seu voto foi para: " + nCandidato3 + " Padroca");
                    Console.Beep();
                    Console.WriteLine("Voto computado com sucesso!\n");
                    Console.WriteLine("SEU COMPROVANTE!");
                    Console.WriteLine("Cidadão: " + UserName +" "+ SobreNome);
                    Console.WriteLine("Portador do RG: " + RG);
                    Console.WriteLine("Idade: " + idade);
                    Console.WriteLine("Local de votação: " + estado);
                    Console.WriteLine("Votou em: " + nCandidato3);
                    Console.WriteLine("\n");

                }
                else
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("Numero candidato invalido!!");
                }
               
                Console.WriteLine("PARA ACESSAR A LISTA DE VOTOS ENTRE COM ADM!");
                ADM = Console.ReadLine();
               
               
                if (ADM == "ADMIN") {
                    Console.WriteLine("Correto vamos la!\n");
                    Console.WriteLine("Cidadão: " + UserName + " "+ SobreNome);
                    Console.WriteLine("Portador do RG: " + RG);
                    Console.WriteLine("Idade: " + idade);
                    Console.WriteLine("Local de votação: " + estado);
                    Console.WriteLine("Votou em: \n" + nCandidato2 + " Federal DO Povo");
                    Console.WriteLine(nCandidato2+ " Federal DO Povo , " + " Obteve o maior numero de votos em: " + estado);
                    Console.WriteLine("URNA BRASIL!");
                }
                else
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("Incorreto!");
                }
            }
            else
            {
                Console.ForegroundColor = ConsoleColor.Red;
                Console.WriteLine("Idade não correspondente , ou inferior a idade minima.");
            }

            Console.ReadLine();

        }
    }
}
