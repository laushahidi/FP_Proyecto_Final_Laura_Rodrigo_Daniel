#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

int rango1500A2000(int numeroAleatorio){
    switch(numeroAleatorio){
        case 1:
            cout<<"Desayuno:\n   Un vaso de leche desnatada, 30 g de pan untados con tomate y aceite de oliva."<<endl;
    	    cout<<"Media mañana:\n   medio melocotón."<<endl;
    	    cout<<"Almuerzo:\n   200 g de acelgas, 100 g de hamburguesa de pollo, 30 g de pan, 1 naranja. "<<endl;
    	    cout<<"Media tarde:\n   100 cc de leche desnatada. "<<endl;
    	    cout<<"Cena:\n   200 g de patatas, 75 g de sardinas, 30 g de pan, una fruta del tiempo."<<endl;
            break;
        case 2:
            cout<<"Desayuno:\n   2 yogures naturales desnatados, 3 biscotes. "<<endl;
        	cout<<"Media mañana:\n   100 ml de zumo natural. "<<endl;
        	cout<<"Almuerzo:\n   40 g de lentejas, 120 g de merluza, 30 g de pan, 300 g de melocotón. "<<endl;
        	cout<<"Media tarde:\n   100 cc de leche desnatada, 100 g de kiwi. "<<endl;
        	cout<<"Cena:\n   200 g de berenjenas, 2 huevos, 30 g de pan, una fruta del tiempo."<<endl;
            break;
        case 3:
            cout<<"Desayuno:\n   Un vaso de leche de soja o arroz o avena, 5 galletas tipo María."<<endl;
        	cout<<"Media mañana:\n   120 g de kiwi."<<endl;
        	cout<<"Almuerzo:\n   200 g de patatas, 100 g de bistec de ternera, 30 g de pan, 200 g de pera."<<endl;
        	cout<<"Media tarde:\n   100 cc de leche desnatada, 100 de melocotón."<<endl;
        	cout<<"Cena:\n   150 g de alcachofas, 120 g de gallitos, 30 g de pan, una fruta del tiempo."<<endl;
            break;
        case 4:
            cout<<"Desayuno:\n   Un vaso de leche desnatada, una tortita de arroz."<<endl;
        	cout<<"Media mañana:\n   100 ml de zumo natural."<<endl;
        	cout<<"Almuerzo:\n   150 g de judías verdes, 100 g de conejo, 30 g de pan, 200 g de melocotón."<<endl;
        	cout<<"Media tarde:\n   100 cc de leche desnatada, 100 g de manzana."<<endl;
        	cout<<"Cena:\n   30 g de arroz en seco, 100 de solomillo de ternera, 30 g de pan, una fruta del tiempo."<<endl;
            break;
        case 5:
            cout<<"Desayuno:\n   2 yogures naturales desnatada,3 biscotes."<<endl;
        	cout<<"Media mañana:\n   120 g de manzana."<<endl;
        	cout<<"Almuerzo:\n   40 g de guisantes, 120 g de lubina, 30 g de pan, 300 g de fresones."<<endl;
        	cout<<"Media tarde:\n   100 cc de leche desnatada, 100 g de kiwi."<<endl;
        	cout<<"Cena:\n   200 g de pimientos, 100 g de filete de vaca, 30 g de pan, una fruta del tiempo."<<endl;
            break;
        case 6:
            cout<<"Desayuno:\n   Un vaso de leche de soja, arroz o avena, 30 g de pan untado con tomate y aceite de oliva."<<endl;
        	cout<<"Media mañana:\n   100 ml de zumo natural."<<endl;
        	cout<<"Almuerzo:\n   30 g de pasta italiana, 100 g de pavo, 30 g de pan, 200 g de kiwi."<<endl;
        	cout<<"Media tarde:\n   100 cc de leche desnatada, 100 g de melocotón."<<endl;
        	cout<<"Cena:\n   200 g de ensalada variada, 75 g de atún al natural, 30 g de pan, una fruta del tiempo."<<endl;
            break;
        case 7:
            cout<<"Desayuno:\n   Un vaso de leche desnatada, 100 g de kiwi."<<endl;
        	cout<<"Media mañana:\n   120 g de pera."<<endl;
        	cout<<"Almuerzo:\n   40 g de garbanzos, 2 huevos, 30 g de pan, 200 g de pera."<<endl;
        	cout<<"Media tarde:\n   100 cc de leche desnatada, 100 g de kiwi."<<endl;
        	cout<<"Cena:\n   150 g de coles de Bruselas, 120 g de lenguado, 30 g de pan, una fruta del tiempo."<<endl;
            break;
        case 8:
            cout<<"Desayuno:\n   Zumo de naranja natural y 2 tostadas integrales de mantequilla light."<<endl;
        	cout<<"Media mañana:\n   Sándwich integral de tomate y fiambre de pavo."<<endl;
        	cout<<"Almuerzo:\n   Espaguetis integrales a la boloñesa. Ensalada de pepino y berros. 1 infusión."<<endl;
        	cout<<"Media tarde:\n   1 yogur desnatado."<<endl;
        	cout<<"Cena:\n   Lasaña de berenjenas. Ensalada de tomate y queso fresco. 1 naranja."<<endl;
            break;
        case 9:
            cout<<"Desayuno:\n   Café con leche desnatada y 2 tostadas integrales de tomate rallado y aceite de oliva."<<endl;
        	cout<<"Media mañana:\n   5 nueces."<<endl;
        	cout<<"Almuerzo:\n   Estofado de ternera. Crema de espinacas. 1 infusión."<<endl;
        	cout<<"Media tarde:\n   1 yogur desnatado de frutas."<<endl;
        	cout<<"Cena:\n   Ensalada de espinacas, tomates cherry, queso fresco desnatado y frutos secos. 1 flan desnatado."<<endl;
            break;
        case 10:
            cout<<"Desayuno:\n   Café con leche desnatada y 4 galletas integrales."<<endl;
        	cout<<"Media mañana:\n   Zumo de naranja natural."<<endl;
        	cout<<"Almuerzo:\n   Salmón a la plancha con guarnición de arroz y setas. 1 manzana."<<endl;
        	cout<<"Media tarde:\n   5 nueces."<<endl;
        	cout<<"Cena:\n   Pechuga de pavo al horno. Ensalada de tomates y nueces. 1 yogur desnatado."<<endl;
            break;
        default:
            break;
    }
}

int rango2000A2500(int numeroAleatorio){
    switch(numeroAleatorio){
        case 1:
            cout<<"Desayuno:\n   1 tazón de leche desnatada con avena, 10 almendras picadas y 10 fresas."<<endl;
	        cout<<"Media mañana:\n   1 pera. 7 nueces."<<endl;
	        cout<<"Almuerzo:\n   Ensalada de alubias y camarones. 1 bol de frutas troceadas."<<endl;
	        cout<<"Media tarde:\n   Té y 1 tostada integral de queso desnatado."<<endl;
	        cout<<"Cena:\n   Sándwich integral con pechuga de pavo, lechuga y tomate. 1 kiwi."<<endl;
            break;
        case 2:
            cout<<"Desayuno:\n   Té y 2 tostadas integrales de mantequilla light."<<endl;
	        cout<<"Media mañana:\n   1 bol de frutas troceadas."<<endl;
	        cout<<"Almuerzo:\n   Guiso de lentejas, pechuga de pollo y berenjena. Ensalada variada. 1 plátano."<<endl;
	        cout<<"Media tarde:\n   1 yogur desnatado con avena y 1 kiwi troceado."<<endl;
	        cout<<"Cena:\n   Filete de atún a la plancha. Sopa de verduras. 1 manzana asada."<<endl;
            break;
        case 3:
            cout<<"Desayuno:\n   Zumo de naranja natural y 2 tostadas integrales de mermelada de frutas."<<endl;
	        cout<<"Media mañana:\n   1 yogur desnatado con muesli."<<endl;
	        cout<<"Almuerzo:\n   Espaguetis con salsa de carne de magra. Ensalada variada. 1 manzana."<<endl;
	        cout<<"Media tarde:\n   Té y 1 tostada integral de queso desnatado."<<endl;
	        cout<<"Cena:\n   Sardinas a la plancha. Espárragos trigueros a la plancha. 1 yogur desnatado."<<endl;
            break;
        case 4:
            cout<<"Desayuno:\n   1 tazón de leche desnatada con avena, 8 nueces picadas y 10 fresas."<<endl;
	        cout<<"Media mañana:\n   1 pera. 10 almendras."<<endl;
	        cout<<"Almuerzo:\n   Pescado blanco al horno con patatas. 1 flan desnatado."<<endl;
	        cout<<"Media tarde:\n   Sándwich integral de fiambre de pavo."<<endl;
	        cout<<"Cena:\n   Tortilla francesa. Ensalada de tomates y nueces. 1 infusión relajante."<<endl;
            break;
        case 5:
            cout<<"Desayuno:\n   Zumo de naranja natural con 2 tostadas integrales de tomate rallado y jamón serrano."<<endl;
	        cout<<"Media mañana:\n   1 bol de frutas troceadas."<<endl;
	        cout<<"Almuerzo:\n   Pescado en salsa de tomate. Puré de patatas. 1 melocotón."<<endl;
	        cout<<"Media tarde:\n   1 batido de leche semidesnatada con frutas y semillas."<<endl;
	        cout<<"Cena:\n   Pechuga de pollo empanada. Arroz hervido con coles de bruselas. 1 yogur."<<endl;
            break;
        case 6:
            cout<<"Desayuno:\n   1 tazón de leche desnatada con avena, 8 nueces picadas y 10 fresas."<<endl;
	        cout<<"Media mañana:\n   Sándwich integral de jamón york y queso."<<endl;
	        cout<<"Almuerzo:\n   Tortilla de patatas. Espárragos trigueros a la plancha. 1 porción de queso fresco. 1 naranja."<<endl;
	        cout<<"Media tarde:\n   1 vaso de leche semidesnatada. 10 almendras."<<endl;
	        cout<<"Cena:\n   Sopa de marisco. Ensalada de pepino y berros. 1 flan desnatado."<<endl;
            break;
        case 7:
            cout<<"Desayuno:\n   Café con leche semidesnatada con 2 tostadas integrales de tomate rallado y jamón serrano."<<endl;
	        cout<<"Media mañana:\n   1 yogur natural con frutas troceadas."<<endl;
	        cout<<"Almuerzo:\n   Bacalao con tomate y verduras. Ensalada variada. 1 melocotón."<<endl;
	        cout<<"Media tarde:\n   Zumo de naranja natural y 1 tostada integral de queso fresco."<<endl;
	        cout<<"Cena:\n   Tortilla francesa con champiñones. Arroz y coliflor hervidos. 1 yogur de frutas."<<endl;
            break;
        case 8:
            cout<<"Desayuno:\n   Zumo de naranja natural con 1 tostada integral de mantequilla y mermelada."<<endl;
	        cout<<"Media mañana:\n   Sándwich integral de jamón york y queso."<<endl;
	        cout<<"Almuerzo:\n   Pollo asado. Arroz hervido con verduras. Ensalada variada. 1 manzana."<<endl;
	        cout<<"Media tarde:\n   1 yogur natural con nueces."<<endl;
	        cout<<"Cena:\n   Ensalada de huevos cocidos, patatas, zanahoria y atún."<<endl;
            break;
        case 9:
            cout<<"Desayuno:\n   Café con leche semidesnatada con 2 tostadas integrales de tomate rallado y jamón serrano."<<endl;
	        cout<<"Media mañana:\n   Sándwich integral de fiambre de pavo."<<endl;
	        cout<<"Almuerzo:\n   Cordero asado con patatas. Ensalada de tomates. 1 flan desnatado."<<endl;
	        cout<<"Media tarde:\n   1 batido de leche semidesnatada con frutas y semillas."<<endl;
	        cout<<"Cena:\n   Huevos fritos con patatas. 1 porción de queso fresco. 1 pera."<<endl;
            break;
        case 10:
            cout<<"Desayuno:\n   Zumo de naranja natural con 2 tostadas integrales de tomate rallado y aceite de oliva."<<endl;
	        cout<<"Media mañana:\n   1 bol de frutas troceadas."<<endl;
	        cout<<"Almuerzo:\n   Macarrones al gusto. Ensalada de endibias. 1 flan desnatado."<<endl;
	        cout<<"Media tarde:\n   1 vaso de leche semidesnatada. 10 almendras."<<endl;
	        cout<<"Cena:\n   Pechuga de pollo a la plancha. Puré de patatas. 1 melocotón."<<endl;
            break;
        default:
        break;
    }
}


int rango2500A3000(int numeroAleatorio){
    
    switch (numeroAleatorio){
        case 1:
            cout<<"Desayuno:\n   2 huevos revueltos con hongos(182) y 100 g avena (200)"<<endl;
            cout<<"Primer merienda:\n   1 manzana con 2 cucharadas de miel"<<endl;
            cout<<"Almuerzo:\n   12 oz de carne, arroz blanco y brócoli 200g"<<endl;
            cout<<"Segunda merienda:\n   Batido de proteína y una banana."<<endl;
            cout<<"Cena:\n   300 g Salmón con quínoa y espárragos."<<endl;
            break;
        case 2:
            cout<<"Desayuno:\n   2 pancakes de avena, 1 cucharada de mantequilla de maní y una taza de fresas."<<endl;
            cout<<"Primer merienda:\n   2 huevos duros y una manzana."<<endl;
            cout<<"Almuerzo:\n   Hamburguesa casera, de una sola carne (12oz), queso y 2 papas al horno, con verduras salteadas."<<endl;
            cout<<"Segunda merienda:\n   Batido de proteína con 50 g de maní."<<endl;
            cout<<"Cena:\n   Pasta con salsa marinara (300 g)."<<endl;
            break;
        case 3:
            cout<<"Desayuno:\n   2 Huevos con salchicha de pollo. 1 papa rostizada."<<endl;
            cout<<"Primer merienda:\n   100 g de yogurt  con almendras 30 g."<<endl;
            cout<<"Almuerzo:\n   12 oz de pechuga de pavo con hongos, 150 g de  arroz blanco, 200 g de vegetales."<<endl;
            cout<<"Segunda merienda:\n   Batido de proteína con uvas."<<endl;
            cout<<"Cena:\n   150 g de atún, ensalada (200 g) y aderezo con aceite de olivo (2 cdas)"<<endl;
            break;
        case 4: 
            cout<<"Desayuno:\n   200g de jamón, 2 huevos y 1 quesadilla con tortilla integral."<<endl;
            cout<<"Primer merienda:\n   8 oz de yogurt con granola"<<endl;
            cout<<"Almuerzo:\n   12 oz de pechuga de pollo con crema, 2 papas horneadas y brócoli"<<endl; 
            cout<<"Segunda merienda:\n   Batido de proteína y frutas frescas mezcladas."<<endl;
            cout<<"Cena:\n   Verduras salteadas con 12 oz de pollo, 2 huevos duros, 100g arroz precocido y brócoli."<<endl;
            break;
        case 5:
            cout<<"Desayuno:\n   100g de arándanos, 1 taza de fresas con yogurt y 100 g de avena."<<endl;
            cout<<"Primer merienda:\n   150g de nueces mixtas."<<endl;
            cout<<"Almuerzo:\n   12 oz de filete de tilapia al limón, 100 g de frijoles enteros con 150g de vegetales."<<endl;
            cout<<"Segunda merienda:\n   Batido de proteína y 200g de sandía."<<endl;
            cout<<"Cena:\n   12 oz de carne, 1 elote dulce, 150 g de arroz precocido con aceitunas."<<endl;
            break;
        case 6:
            cout<<"Desayuno:\n   3 huevos duros, 1 tostada, 1 tomate mediano, 2 rebanadas de jamón ahumado."<<endl;
            cout<<"Primer merienda:\n   100 g de pasta integral, 150 gr de pavo."<<endl; 
            cout<<"Almuerzo:\n   12 oz de pollo a la plancha, 150 g de arroz blanco, 100 g de frijoles, 100 g de ensalada."<<endl;
            cout<<"Segunda merienda:\n   120 g de garbanzo hervido con 2 lonjas de jamón ahumado."<<endl;
            cout<<"Cena:\n   12 oz de pescado con ensalada fresca 200 g. 1 barra de proteína."<<endl;
            break;
        case 7: 
            cout<<"Desayuno:\n   2 huevos duros, 2 tostadas de pan con aguacate."<<endl;
            cout<<"Primer merienda:\n   12 oz de yogurt con 50 g de granola"<<endl; 
            cout<<"Almuerzo:\n   12 oz de carne , arroz pre cocido, brócoli 200 g."<<endl;
            cout<<"Segunda merienda:\n   1 taza 250 ml de leche descremada, 40 g de pan integral, queso fresco y 1 fruta."<<endl; 
            cout<<"Cena:\n   Sopa con 40 g de fideos, pescado 150 g y 150 g de papas cocidas, lechuga 300 g, pan integral 40 g y 200 g de naranja."<<endl;
            break;
        case 8: 
            cout<<"Desayuno:\n   1 taza leche desnatada 250 ml, pan integral 50 g, jamón de York 40 g, 200 g de fruta."<<endl;
            cout<<"Primer merienda:\n   40 g de queso fresco, 40 g de pan integral, 1 manzana y 1 naranja."<<endl;
            cout<<"Almuerzo:\n   12 oz de carne guisada, 240g de arroz blanco, 250g de ensalada."<<endl;
            cout<<"Segunda merienda:\n   30 g de nueces mixtas,  batido de proteína."<<endl;
            cout<<"Cena:\n   200 g de puré de papas, 8 oz de pescado, pan 70g, 1 fruta 125 g."<<endl;
            break;
        case 9:
            cout<<"Desayuno:\n   2 huevos duros, 2 tostadas de pan con aguacate."<<endl; 
            cout<<"Primer merienda:\n   1 barra de proteína, 1 tostada con mantequilla de maní."<<endl; 
            cout<<"Almuerzo:\n   12 oz de chuleta de cerdo, 2 papas horneadas con mantequilla y 100 g de arroz blanco."<<endl;
            cout<<"Segunda merienda:\n   Batido de proteína, 1 taza de fresas."<<endl;
            cout<<"Cena:\n   4 albóndigas de pavo 3 oz cada una, 250 g de pasta con salsa marinara y queso parmesano."<<endl;
            break;
        case 10:
            cout<<"Desayuno:\n   200g de jamón, 2 huevos y 1 quesadilla con tortilla integral."<<endl;
            cout<<"Primer merienda:\n   8 oz de yogurt con granola"<<endl;
            cout<<"Almuerzo:\n   12 oz de pechuga de pollo con crema, 2 papas horneadas y brócoli"<<endl; 
            cout<<"Segunda merienda:\n   Batido de proteína y frutas frescas mezcladas."<<endl;
            cout<<"Cena:\n   Verduras salteadas con 12 oz de pollo, 2 huevos duros, 100g arroz precocido y brócoli."<<endl;
            break;
    }
    
}


int rango3000A3500(int numeroAleatorio) 
{
    switch (numeroAleatorio){
        case 1:
cout<<"Desayuno:\n    120g de avena, 3 claras de huevo, 2 yemas de huevo."<<endl;
cout<<"Merienda 1:\n     2 rebanadas de pan integral, 1 lata de atún, 40g de caseína"<<endl;
cout<<"Almuerzo:\n     200g de pollo o ternera a la plancha, 100g de arroz basmati o integral, Ensalada"<<endl;
cout<<"Merienda 2:\n     40g de proteína de suero, 1 plátano, 250ml de leche desnatada"<<endl;
cout<<"Cena:\n     200g de pescado a la plancha, 100g de arroz basmati o integral, Ensalada"<<endl;
break;
        case 2:
        cout<<"Desayuno:\n    1 vaso de zumo de frutas (200 cc), 1 taza de leche desnatada (240 cc), 1 cucharada pequeña de miel o azúcar (15 g) Cereales: 1/2 taza integrales + 1/2 taza normales.\n    Taza: 60 g, 30-40 g de queso fresco, café descafeinado, té o infusión"<<endl;
cout<<"Merienda 1:\n     1 yogurt desnatado, 1 pieza de fruta (125 g), 1 cucharada pequeña de miel (15 g)"<<endl;
cout<<"Almuerzo:\n     1 plato pasta o arroz o legumbres (240 g cocido), 125 g de carne o 175 g de pescado, 1 plato de ensalada variada (250 g aprox.), 70 g de pan, 1 pieza de fruta (125 g)"<<endl;
cout<<"Merienda 2:\n     30 g de frutos secos, 1 yogurt desnatado, 1 pieza de fruta (125 g), 2 cucharadas soperas de mermelada"<<endl;
cout<<"Cena:\n     1 plato de verdura cocida (200-250 g), 2 patatas medianas hervidas (200 g), 125 g de pescado, 70 g de pan, 1 pieza de fruta (125 g)"<<endl;
break;
        case 3:
        cout<<"Desayuno:\n    2 Omelette, 250g vegetales al vapor, 1 vaso de zumo de frutas."<<endl;
cout<<"Merienda 1:\n     Batido de yogurt, 150g fruta, 20g avellana."<<endl;
cout<<"Almuerzo:\n    200g lasaña de atun con salsa de pimientos rojos, ensalada de vegetales crudos, zumo de frutas."<<endl;
cout<<"Merienda 2:\n     pudin de chia y chocolate, 2 melocotones."<<endl;
cout<<"Cena:\n     Rolls de vegetales y pavo,200 ml leche"<<endl;
        break;
        case 4:
        cout<<"Desayuno:\n    Tortilla de 4 claras + 1 yema, 80 g de avena, 200 ml de leche, 40 g de nueces."<<endl;
cout<<"Merienda 1:\n     100 g de pavo, 200g de pan, una fruta."<<endl;
cout<<"Almuerzo:\n    200 g de carne, 150 g de arroz blanco, 200 g de champiñones, 1 yogurt."<<endl;
cout<<"Merienda 2:\n     100 g de atún al agua, 30 g de almendra."<<endl;
cout<<"Cena:\n     250 g de pasta, 150 g de ensalada mixta, 20 g de aceite de oliva, 1 fruta."<<endl;
        break;
        case 5:
        cout<<"Desayuno:\n    2 tostadas con mermelada, 80 g de avena, 200 ml de jugo o leche, 40 g de almendras."<<endl;
cout<<"Merienda 1:\n     100 g de atún natural, 200 g de pasta, 30 g de nueces."<<endl;
cout<<"Almuerzo:\n    200 g de pechuga de pollo,150 g de pasta integral, 200 g de calabacín, flan."<<endl;
cout<<"Merienda 2:\n     Ensalada, 2 frutas, 100 g de pan integral. "<<endl;
cout<<"Cena:\n     300 g de papas, 150 g de ensalada mixta, 20 g de aceite de oliva, pieza de fruta."<<endl;
        break;
        case 6:
        cout<<"Desayuno:\n    Tortilla de 4 claras con 1 yema, 80 g avena, jugo de naranja, 40 g avellanas."<<endl;
cout<<"Merienda 1:\n     100 g de pavo, 200 g de pan integral,  fruta. "<<endl;
cout<<"Almuerzo:\n    200 g de carne, 300 g de papas, 200 g mezcla de ensalada con aderezo. "<<endl;
cout<<"Merienda 2:\n     100 g de avena, batido de proteína."<<endl;
cout<<"Cena:\n     200 g salmón, 150 g de arroz, 150 g de ensalada, fruta."<<endl;
        break;
        case 7:
        cout<<"Desayuno:\n    9 claras y 2 yemas de huevo, 100g de avena, 1 pieza de fruta."<<endl;
cout<<"Merienda 1:\n     2 rebanadas de pan integral, 1 lata de atún, 1 plátano"<<endl;
cout<<"Almuerzo:\n    200g de ternera, 100g de arroz integral, Ensalada, 100g de avena."<<endl;
cout<<"Merienda 2:\n     40g de proteína de suero, 1 plátano, 6 claras de huevo."<<endl;
cout<<"Cena:\n     150g de salmón a la plancha, 100g de esparragos, 1 pieza de fruta a elegir."<<endl;
        break;
        case 8:
        cout<<"Desayuno:\n    Tortilla de 3 claras, 80g de copos de maíz, 5g de aceite de lino, 20g de avellanas"<<endl;
cout<<"Merienda 1:\n     Sandwich de 2 rebanadas de pan, 1 lata de atún, 1 plátano"<<endl;
cout<<"Almuerzo:\n    150g de ternera, 85g de arroz blanco, 125g de natillas, Ensalada mixta"<<endl;
cout<<"Merienda 2:\n     100 de queso fresco batido, 5 tortitas de arroz, 35g de avellanas"<<endl;
cout<<"Cena:\n     140g de pescado blanco, 110g de pasta integral, 1 pieza de fruta, Ensalada"<<endl;
        break;
        case 9:
        cout<<"Desayuno:\n    50g de avena con 250ml de leche, 40g de proteína de suero, 10g de lecitina de soja, 15g de nueces"<<endl;
cout<<"Merienda 1:\n     80g de muesli, 10g de lecitina de soja, 20g de almendras"<<endl;
cout<<"Almuerzo:\n    150g de garbanzos cocidos, 100g de arroz integral, 125g de flan de vainilla, 200g de ensalada mixta"<<endl;
cout<<"Merienda 2:\n     80g de caballa en aceite, 170g de pan blanco, 35g de almendras"<<endl;
cout<<"Cena:\n     150g de lenguado, 100g de pasta blanca, 1 pieza de fruta, 150g de ensalada mixta"<<endl;
        break;
        case 10:
        cout<<"Desayuno:\n    250ml de leche, 80g de muesli, 40g de proteína de suero, 10g de lecitina de soja, 10g de cacahuetes"<<endl;
cout<<"Merienda 1:\n     Sandwich de 2 rebanadas de pan,  1 lata de atún, 1 plátano"<<endl;
cout<<"Almuerzo:\n    150g de solomillo de cerdo, 300g de patatas cocidas, 1 manzana, Ensalada mixta"<<endl;
cout<<"Merienda 2:\n     65g de jamón serrano, 170g de pan integral, 40g de cacahuetes"<<endl;
cout<<"Cena:\n     150g de pescado blanco, 100g de arroz integral, Ensalada mixta"<<endl;
        break;
    }

}


int rango3500A4000(int numeroAleatorio){
    switch(numeroAleatorio){
        case 1:
        cout<<"Desayuno-"<<endl<<"   Taza de leche semidesnatada (200g)"<<endl<<"   4 rebanadas de pan integral medianas con 1 cucharada de aceite de oliva y tomate"<<endl;
        cout<<"Merienda-"<<endl<<"   Vaso de yogur desnatado (200g)"<<endl<<"   50 gramos de avena"<<endl<<"   30 gramos de nueces picadas"<<endl<<"   1 plátano mediano en rebanadas"<<endl;
        cout<<"Almuerzo-"<<endl<<"   Guisado de arroz (1/2 taza)"<<endl<<"   alubias (1/4 taza)"<<endl<<"   100 gramos de carne magra de ternera"<<endl;
        cout<<"Merienda-"<<endl<<"   Zumo de naranja"<<endl<<"   4 rebanadas de pan integral"<<endl<<"   30 gramos de queso"<<endl<<"   2 cucharadas de mermelada de frutas"<<endl;
        cout<<"Cena-"<<endl<<"   Ensalada de hojas verde"<<endl<<"   100 gramos de pechuga de pollo"<<endl<<"   un puñado (30 gramos) de pipas de girasol, tomate y 1 huevo entero"<<endl<<"   2 manzanas"<<endl;
        break;
        case 2:
        cout<<"Desayuno-"<<endl<<"   Tazón de yogur desnatado (200 g)"<<endl<<"   50 gramos de avena, fresas frescas picadas y un puñado (30 gramos) de almendras"<<endl;
        cout<<"Merienda-"<<endl<<"   2 rebanadas grandes de pan integral"<<endl<<"   queso fresco (30g)"<<endl<<"   tomate, hojas verdes al gusto"<<endl<<"   pechuga de pavo (50g)"<<endl;
        cout<<"Almuerzo-"<<endl<<"   Macarrones (80 g)"<<endl<<"   atún (100g)"<<endl<<"   tomate, guisantes (3 cucharadas) y aceite de oliva (2 cucharadas) acompañado con 2 rebanadas de pan"<<endl<<"   1 mandarina"<<endl;
        cout<<"Merienda-"<<endl<<"   Vaso de leche semidesnatada (200g)"<<endl<<"   4 rebanadas de pan integral"<<endl<<"   mermelada de frutas (2 cucharadas)"<<endl;
        cout<<"Cena-"<<endl<<"   Brochetas de magro de cerdo (50g)"<<endl<<"   setas, cubos de calabaza, calabacín, berenjena y cebolla espolvoreados con semillas de sésamo (3 cucharadas)"<<endl<<"   marinado con aceite de oliva y zumo de limón"<<endl;
        break;
        case 3:
        cout<<"Desayuno-"<<endl<<"  100g de avena"<<endl<<"   5 claras de huevo"<<endl;
        cout<<"Merienda-"<<endl<<"   40g de proteína de suero"<<endl<<"   350ml de leche desnatada"<<endl<<"   5g de creatina"<<endl<<"   1 cucharada de mantequilla de cacahuete"<<endl;
        cout<<"Almuerzo-"<<endl<<"   2 rebanadas de pan integral"<<endl<<"   atún (100g)"<<endl<<"   tomate, guisantes (3 cucharadas) y aceite de oliva (2 cucharadas) acompañado con 2 rebanadas de pan"<<endl<<"   1 mandarina"<<endl;
        cout<<"Merienda-"<<endl<<"   40g de proteína de suero"<<endl<<"   1 plátano"<<endl;
        cout<<"Cena-"<<endl<<"   200g de pescado a la plancha"<<endl<<"   100g de arroz basmati o integral"<<endl<<"   Ensalada"<<endl;
        break;
        case 4:
        cout<<"Desayuno-"<<endl<<"   120g de avena."<<endl<<"   3 claras de huevo."<<endl<<"2 yemas de huevo"<<endl;
        cout<<"Merienda-"<<endl<<"   100g de pan integral."<<endl<<"   80g de atún."<<endl;
        cout<<"Almuerzo-"<<endl<<"   100g de arroz."<<endl<<"   120g de pechuga de pollo."<<endl<<"   Brócolis."<<endl<<"   1 cucharada de aceite de oliva."<<endl;
        cout<<"Merienda-"<<endl<<"   80g de avena."<<endl<<"   200g de queso cottage."<<endl<<"   50g de maní."<<endl;
        cout<<"Cena-"<<endl<<"   200g de salmón."<<endl<<"   100g de arroz."<<endl<<"   160g de queso cottage."<<endl;
        break;
        case 5:
        
        break;
        case 6:
        
        break;
        case 7:
        
        break;
        case 8:
        
        break;
        case 9:
        
        break;
        case 10:
        
        break;
        default:
        break;
    }
}


int rango4000(int numeroAleatorio){
    switch(numeroAleatorio){
        case 1:
        
        break;
        case 2:
        
        break;
        case 3:
        
        break;
        case 4:
        
        break;
        case 5:
        
        break;
        case 6:
        
        break;
        case 7:
        
        break;
        case 8:
        
        break;
        case 9:
        
        break;
        case 10:
        
        break;
        default:
        break;
    }
}

int usuarioImc(int imc, string decisioonEjercicio, int enfoquee,float pesoKg, float altura, int genero, int edad, int numAleatorioo){
    float hacerLLegar;
    int cantidadCaloriaas;
    if(genero == 1){
        cantidadCaloriaas=(10*pesoKg) + (6.25*altura) - (5*edad) - 161;
    }
    else if(genero == 2){
        cantidadCaloriaas=(10*pesoKg) + (6.25*altura) - (5*edad) + 5;
    }
    if(decisioonEjercicio == "si"){
        cantidadCaloriaas = cantidadCaloriaas + 500;
    }else{
        cantidadCaloriaas = cantidadCaloriaas + 250;
    }
    if(enfoquee == 1){
        if(decisioonEjercicio == "si"){
            cantidadCaloriaas = cantidadCaloriaas -(cantidadCaloriaas*0.15);
        }else{
            cantidadCaloriaas = cantidadCaloriaas -(cantidadCaloriaas*0.20);
        }
    }else if(enfoquee == 3){
        if(decisioonEjercicio == "si"){
            cantidadCaloriaas = cantidadCaloriaas*1.55;
        }else{
            cantidadCaloriaas = cantidadCaloriaas*1.2;
        }
    }
    if(cantidadCaloriaas < 1500){
        hacerLLegar = 1500 - cantidadCaloriaas;
        cantidadCaloriaas = cantidadCaloriaas + hacerLLegar;
    }
    cout<<endl<<"Tus calorias sugeridas son: "<<cantidadCaloriaas<<endl<<endl;
    cout<<"El siguiente menu fue personalizado de acuerdo con tus calorias"<<endl<<endl;
    if(cantidadCaloriaas >= 1500 && cantidadCaloriaas < 2000){
            rango1500A2000(numAleatorioo);
    }else if(cantidadCaloriaas >= 2000 && cantidadCaloriaas < 2500){
        rango2000A2500(numAleatorioo);
    }else if(cantidadCaloriaas >= 2500 && cantidadCaloriaas < 3000){
        rango2500A3000(numAleatorioo);
    }else if(cantidadCaloriaas >= 3000 && cantidadCaloriaas < 3500){
        rango3000A3500(numAleatorioo);
    }else if(cantidadCaloriaas >= 3500 && cantidadCaloriaas < 4000){
        rango3500A4000(numAleatorioo);
    }else{
        rango4000(numAleatorioo);
    }
}

int main()
{
    float pesolb, peso, altura, imc;
    srand(time(NULL));
    int cantidadCalorias = 0;
    int numAleatorio;
    int decisionUsuario;
    string decisionEjercicio;
    int enfoque;
    int genero;
    int edad;
    string nombre;
    numAleatorio = 1 + rand() % (11 - 1);; 
    cout<<"Hola! te encuentras con hambre?"<<endl;
    cout<<"En este programa te daremos un menu diario segun la cantidad de calorias diarias que quieres consumir"<<endl;
    cout<<"¿Como te llamas? "<<endl;
    cin>>nombre;
    cout<<"¿Como quieres obtener tu dieta?"<<endl;
    cout<<"1) Personalizado segun tu indice de masa corporal"<<endl;
    cout<<"2) Ingresar el numero de calorias que quieres consumir"<<endl;
    cout<<"Ingresa tu decision segun el numeral"<<endl;
    cin>>decisionUsuario;
    while(decisionUsuario == 0 || decisionUsuario > 2){
        cout<<"Ingresa una opcion entre (1, 2): "<<endl;
        cin>>decisionUsuario;
    }
    if(decisionUsuario == 1){
        cout<<"Selecciona tu genero: "<<endl<<"1) Mujer "<<endl<<"2) Hombre "<<endl<<"Ingresa tu respuesta segun el numeral(1, 2)"<<endl;
        cin>>genero;
        while(genero > 2 || genero == 0){
            cout<<"Ingresa tu respuesta segun el numeral (1 o 2)"<<endl;
            cin>>genero;
        }
        cout<<"Ingresa tu edad: ";
        cin>>edad;
        while(edad == 0 || edad > 120){
            cout<<"sabemos que no tienes "<<edad<<", ingresa tu edad real"<<endl;
            cin>>edad;
        }
        cout<< "Ingresa tu peso en libras: ";
        cin>>pesolb;
        cout<< "Ingresa tu altura en metros: ";
        cin>>altura;
        while(altura > 3){
            cout<<"ingresa tu altura en metro! si mides 180 cm serian (1.8) metros"<<endl;
            cin>>altura;
        }
        altura = altura * 100;
        peso=pesolb/2.2046;
        imc=peso/(pow((altura/100), 2));
        cout<<endl<<"¿Haces ejercicio?"<<endl;
        cout<<"Responde (si,no)"<<endl;
        cin>>decisionEjercicio;
        while(decisionEjercicio != "si" && decisionEjercicio != "no"){
            cout<<"La respuesta debe ser (si o no) y debe ser en minuscula"<<endl;
            cin>>decisionEjercicio;
        }
        cout<<"¿Cual es tu enfoque?"<<endl;
        cout<<"1) Adelgazar"<<endl<<"2) Manterse"<<endl<<"3) Aumentar"<<endl;
        cout<<"Ingresa tu respuesta segun el numeral(1,2,3)"<<endl;
        cin>>enfoque;
        while(enfoque == 0 || enfoque > 3){
            cout<<"Debes elegir uno de los 3 posibles enfoques concorde a su numero!"<<endl;
            cin>>enfoque;
        }
        usuarioImc(imc, decisionEjercicio, enfoque, peso, altura, genero, edad, numAleatorio);
        }
    else if(decisionUsuario == 2){
        cout<<"Ingrese la cantidad de calorias que quieres consumir en el dia"<<endl;
        cin>>cantidadCalorias;
        while(cantidadCalorias < 1500){
            cout<<"Si consumes menos de 1500 calorias al dia puedes enfermarte!"<<endl<<"Ingrese un numero mayor o igual a 1500"<<endl;
            cin>>cantidadCalorias;
        }
        if(cantidadCalorias >= 1500 && cantidadCalorias < 2000){
            rango1500A2000(numAleatorio);
        }else if(cantidadCalorias >= 2000 && cantidadCalorias < 2500){
            rango2000A2500(numAleatorio);
        }else if(cantidadCalorias >= 2500 && cantidadCalorias < 3000){
            rango2500A3000(numAleatorio);
        }else if(cantidadCalorias >= 3000 && cantidadCalorias < 3500){
            rango3000A3500(numAleatorio);
        }else if(cantidadCalorias >= 3500 && cantidadCalorias < 4000){
            rango3500A4000(numAleatorio);
        }else if(cantidadCalorias > 4000){
            rango4000(numAleatorio);
        }
    }
   
    return 0;
}
