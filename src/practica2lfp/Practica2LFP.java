/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practica2lfp;

import java.io.File;
import java.io.IOException;

/**
 *
 * @author 
 */
public class Practica2LFP {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       interfaz ventana = new interfaz();
       ventana.setVisible(true);
        String path = "E:/Analizador/src/practica2lfp/Lexer.flex";
        generarLexer(path);
    }
    public static void generarLexer(String path){
        File file=new File(path);
        jflex.Main.generate(file);
    }
}
