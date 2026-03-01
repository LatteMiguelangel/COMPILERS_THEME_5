grammar Interfaces;

// --- REGLAS DEL PARSER (SINTAXIS) ---
configFile : line* EOF ;

line : autoStmt
     | ifaceStmt
     | optionStmt
     | NEWLINE ;

autoStmt : AUTO val NEWLINE ;
ifaceStmt : IFACE val FAMILY METHOD NEWLINE ;
optionStmt : OPTION_NAME val+ NEWLINE ; // val+ permite varios valores (ej. en dns-nameservers)

// Esta regla agrupa todo lo que puede comportarse como un valor o nombre
val : ID | VALUE_STR | FAMILY | METHOD | AUTO | IFACE | OPTION_NAME ;

// --- REGLAS DEL LEXER (TOKENS) ---
// 1. Reglas de descarte (Deben ir primero para evitar conflictos)
WS : [ \t]+ -> skip ;
COMMENT : '#' ~[\r\n]* -> skip ;
NEWLINE : '\r'? '\n' ;

// 2. Palabras reservadas
AUTO : 'auto' ;
IFACE : 'iface' ;
FAMILY : 'inet' | 'inet6' ;
METHOD : 'static' | 'dhcp' | 'loopback' | 'manual' ;
OPTION_NAME : 'address' | 'netmask' | 'gateway' | 'network' | 'broadcast' | 'dns-nameservers' ;

// 3. Identificadores y Valores Generales
ID : [a-zA-Z0-9_]+ ;
VALUE_STR : ~[ \t\r\n#]+ ; // Atrapa cualquier cosa que NO sea un espacio, salto de línea o '#'
