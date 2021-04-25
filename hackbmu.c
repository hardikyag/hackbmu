#include<stdio.h>
#include<string.h>

int main(){

int nonion,ntomato,nGreenChilli,nChicken,nCoriander,nPaneer,nCauliflower,npotato,nspinach,ncapsicum,serialno;
printf("Enter the amount of ingredient-tomato:");
scanf("%d",&ntomato);
printf("Enter the amount of ingredient-onion:");
scanf("%d",&nonion);
printf("Enter the amount of ingredient-potato:");
scanf("%d",&npotato);
printf("Enter the amount of ingredient-Green Chilli:");
scanf("%d",&nGreenChilli);
printf("Enter the amount of ingredient-Chicken(in kilograms):");
scanf("%d",&nChicken);
printf("Enter the amount of ingredient-Coriander(in bunch):");
scanf("%d",&nCoriander);
printf("Enter the amount of ingredient-Panner(in cubes):");
scanf("%d",&nPaneer);
printf("Enter the amount of ingredient-Cauliflower:");
scanf("%d",&nCauliflower);
printf("Enter the amount of ingredient-Spinach(in bunch):");
scanf("%d",&nspinach);
printf("Enter the amount of ingredient-Capsicum:");
scanf("%d",&ncapsicum);

printf("\nThank you for entering the amount of ingredients!\nBelow are the possible dishes you can make");
if(nonion>=4 && ntomato>=3 && nGreenChilli>=3 && nChicken>=1){
    printf("\n\nSr.No(1)-Chicken Curry");
}
if(nonion>=2 && ntomato>=2 && nGreenChilli>=2 && nCoriander>=2 && nPaneer>=3){
     printf("\n\nSr.No(2)-Shahi Paneer");
}
if(nonion>=2 && ntomato>=1 && nGreenChilli>=2 && nCoriander>=1 && nCauliflower>=1 && npotato>=1){
    printf("\n\nSr.No(3)-Mix Vegetables");
}
if(nonion>=3 && nCoriander>=2 && nCauliflower>=2 && ncapsicum>=2){
    printf("\n\nSr.No(4)-Gobhi Capsicum");
}
if(nonion>=1 && ntomato>=1 && nPaneer>=2 && nspinach>=2){
    printf("\n\nSr.No(5)-Palak Paneer");
}
if(nonion>=3 && ntomato>=2 && npotato>=3){
    printf("\n\nSr.No(6)-Potato Fry");
}
if(nonion==0 && ntomato==0 && nGreenChilli<=1 && nChicken==0 && nCoriander==0 && nPaneer<=1 && nCauliflower==0 && npotato==0 && nspinach<=1 && ncapsicum<=0){
    printf("Sorry you do not have enough ingredients to make any dishes!");
}

printf("\n\nEnter the serial number of the dish you want to make to get the recipe for the same:");
scanf("%d",&serialno);

if(serialno==1){
printf("\n\nRecipe for Chicken Curry-\n\n1)Sprinkle the chicken breasts with 2 teaspoons salt.\n\n2)Heat the oil in a large skillet over high heat; partially cook the chicken in \nthe hot oil in batches until completely browned. Transfer the browned \nchicken breasts to a plate and set aside.\n\n3)Reduce the heat under the skillet to medium-high; add the onion, garlic, and \nginger to the oil remaining in the skillet and cook and stir until the onion \nturns translucent, about 8 minutes. Stir the curry powder, cumin, turmeric, \ncoriander, cayenne, and 1 tablespoon of water into the onion mixture; allow \nto heat together for about 1 minute while stirring. Mix the tomatoes, yogurt, 1 \ntablespoon chopped cilantro, and 1 teaspoon salt into the mixture. Return the \nchicken breast to the skillet along with any juices on the plate. Pour 1/2 cup \nwater into the mixture; bring to a boil, turning the chicken to coat with the \nsauce. Sprinkle the garam masala and 1 tablespoon cilantro over the chicken.\n\n4) Cover the skillet and simmer until the chicken breasts are no longer pink in \nthe center and the juices run clear, about 20 minutes. An instant-read \nthermometer inserted into the center should read at least 165 degrees F (74 \ndegrees).");
}

if(serialno==2){
printf("\n\nRecipe for Shahi Paneer-\n\n1) firstly, in a kadai heat 1 tbsp butter and saute 2 pods cardamom, 1 inch \ncinnamon,1 pod black cardamom and 3 cloves.\n2) now add 1 onion, 3 clove garlic and 1 inch ginger.\n3)saute slightly until onion softens.\n4)further, add 2 tomato and saute slightly.\n5)also, add 1 cup water and 1 tsp salt. mix well.\n6)cover and boil for 20 minutes or until it softens completely.\n7)cool completely and transfer to a blender. blend to smooth paste without\n8)adding any water.\n9)sieve the puree making sure the puree is smooth and silky. keep aside.\n10)in a large kadai heat 1 tbsp butter and saute ½ tsp shahi jeera and 1 \nbay leaf.\n11)keeping flame on low add ¼ tsp turmeric and 1 tsp chilli powder.\n12)saute slightly until the spices turn aromatic.\n13)add in the prepared tomato-onion puree and mix well.\n14)further, add ¼ cup cream and mix until everything is well combined.\n15)add in 15 cubes paneer, few threads saffron and mix well.\n16)cover and simmer for 5 minutes or until flavours are absorbed well.\n17)now add ½ tsp kasuri methi and ¼ tsp garam masala. mix well.\n18)finally, enjoy shahi paneer with roti or garlic naan.");
}

if(serialno==3){
printf("\n\nRecipe for Mix Vegetables-\n\n1)firstly heat 4 tsp oil and saute spices.\n2)saute 1 onion and 1 tsp ginger garlic paste.\n3)further add spices and 1 tsp salt. saute well.\n4)add tomato puree and cook well.\n5)add ½ cup whisked curd. stir continuously.\n6)now add roasted mix vegetables and mix well.\n7)add ½ cup water and cook for another 10 minutes.\n8)turn off the flame and add 2 tbsp cream, 1 tsp kasuri methi and 2 tbsp \ncoriander. mix well.\n9)finally, serve mix vegetable curry / mix veg recipe with hot roti.");
       }

if(serialno==4){
printf("\n\nRecipe for Gobhi Capsicum-\n\n1)Heat the oil in a pan, once hot add cumin seeds let them sizzle a bit.\n2)Mix in chopped onions and sprinkle some salt. Cook the onions till it \nbecomes translucent and soft.\n3)Add ginger paste, garlic paste and chopped green chilies. cook for 30 seconds.\n4)Mix in cauliflower florets, add remaining salt.\n5)Cover and cook them till 50% done.\n6)Then add capsicum and tomatoes. Mix well.\n7)Add turmeric powder and red chili powder. Mix well so all the masala \ncoats the veggies. Cover the pan and cook.\n8)cook till cauliflower is cooked all the way through and becomes tender \nand soft. Stir in between to make sure it is not sticking.\n9)Lastly, add kasoori methi and garam masala. Mix well\n10)Turn off the stove.");
}

if(serialno==5){
printf("\n\nRecipe for Palak Paneer-\n\n1)To a pot of boiling water, add little salt and then spinach leaves to it. \nBlanch the spinach leaves for 2 to 3 minutes until wilted.\n\n2)Take them out and put them in ice cold water. This helps the leaves \nin retaining their green color.\n\n3)To a blender, add the blanched spinach along with tomato, 3 cloves \nof garlic, ginger and green chili. Puree to a smooth paste and set \naside.\n\n4)Heat a pan on medium heat. Once hot, add the oil and then add the \nremaining 2 cloves of chopped garlic. Sauté for few minutes until it \nstarts changing color.\n\n5)Then add the chopped onions. Cook the onion for 2 to 3 minutes \nuntil soft and translucent.\n\n6)Add in the prepared spinach puree and mix. Also add around 1/2 cup \nwater at the point.\n\n7)Cover the pan and let it cook for 10 minutes on medium heat. The \nspinach will bubble a lot. Stir at regular intervals to avoid sticking at \nthe bottom.\n\n8)Once the spinach is cooked, add the garam masala, turmeric powder, \nred chilli powder and salt. Mix and cook for 1 minute.\n\n9)You may also add ½ teaspoon of sugar at this point if you like.\n\n10)Then add the heavy cream and mix.\n\n11)Stir in the paneer and mix. Let the curry simmer for 3 to 4 \nminutes. Switch off the flame, add lemon juice and kasuri methi and \nmix.\n\n12)Serve palak paneer hot with naan or roti or rice.");
}

if(serialno==6){
printf("\n\nRecipe for Potato Fry-\n\n\n\n1)firstly, peel the potatoes and cut into cubes.\n\n2)soak the chopped potato pieces in cold water for 5 minutes to get rid of \nextra starch.\n\n3)further, heat a non stick pan or a thick bottomed pan with 4-5 tbsp of oil\n\n4)once the oil turns hot, add in the chopped - soaked potato cubes into it.\n\n5)stir and spread the potatoes gently making sure to coat it with oil.\n\n6)fry for 2-3 minutes on medium flame without disturbing.\n\n7)further, stir occasionally for even cooking of potatoes.\n\n8)make sure to fry on medium flame else potatoes will not cook from \ninside and turn crispy.\n\n9)also note not to over mix as they turn to be soft and sticky.\n\n10)fry the potatoes till it turns golden brown in colour from all the sides.\n\n11)switch off the flame and sprinkle chilli powder.\n\n12)also sprinkle salt to taste.\n\n13)mix immediately making sure to coat evenly.\n\n14)finally serve aloo fry or potato fry with hot steamed rice or rasam.");
}

return 0;
}
