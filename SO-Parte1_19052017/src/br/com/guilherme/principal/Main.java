package br.com.guilherme.principal;

import br.com.guilherme.principal.estruturas.Armazem;
import br.com.guilherme.principal.estruturas.Contador;
import br.com.guilherme.principal.estruturas.Impressora;

/**
 * Created by guilh on 31/05/2017.
 */
public class Main {
    public static void main(String[] args) {
        Armazem armazem = new Armazem();
        int count = 100;

        Contador contador = new Contador(armazem, count);
        Impressora impressora = new Impressora(armazem, count);

        Thread t1 = new Thread(contador);
        t1.start();

        Thread t2 = new Thread(impressora);
        t2.start();
    }
}
