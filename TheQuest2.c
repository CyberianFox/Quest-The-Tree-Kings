#include <stdio.h>
#include <stdlib.h>

int scan1();
int scan10();
int scan12();
int scan13();
int scan23();
int scan123();

	int main()
{
	int direction, location, action, intro, y;
	int haskey=0;
	int hasnote=0;
	int haspen=0;
	int hascandle=0;
	int hastoy=0;
	int haslighter=0;
			printf("Start of program...\n");
			printf("Press 'Enter' to begin program");
			scanf("d%", &y);
			printf("\n");
			
			printf("Quest: The Three Kings\n Press '1' to begin\n Press '0' to exit\n");
			printf("\n");
			printf("Enter response:");
			intro = scan10();
			if(intro==1)
			{
				Deadend1:
				printf("\n");
				printf("There's a fork in the road.\n Do you, Go left(1) or Right(2)?\n");
				printf("\n");
				printf("Enter response:");
				direction = scan12();
				if(direction==1)
				{
					Deadend2:
					printf("\n");
					printf("You went left: You come to another fork in the road.\n Do you, go left(1) or right(2)?\n Go Back(3)\n");
					printf("\n");
					printf("Enter response:");
					direction = scan123();
					if(direction==3)
					{
						goto Deadend1;
					}
					if(direction==1)
					{
						Deadend8:
						printf("\n");
						printf("You went left: The path is a Dead End.\n Go back(1).\n");
						printf("\n");
						printf("Enter response:");
						location = scan1();
						if(location==1)
						{
							goto Deadend2;
						}
					}
					else if(direction==2)
					{
						Deadend3:
						printf("\n");
						printf("you come to a cave, inside is a faint light.\n Do you, go in(1) or go back(2).\n");
						printf("\n");
						printf("Enter response:");
						location = scan12();						
						if(location==1)
						{
							Deadend4:
							printf("\n");
							printf("You enter the cave, there are two seperate tunnels.\n Do you, go left(1) or right(2)?\n Go Back(3)\n");
							printf("\n");
							printf("Enter response:");
							direction = scan123();
							if(direction==3)
							{
								goto Deadend3;
							}
							if(direction==1)
							{
								Deadend5:
								printf("\n");
								printf("You enter into a large room, the room seems to have been lived in.\n Do you, investigate(1) or go back(2)?\n");
								printf("\n");
								printf("Enter response:");
								action = scan12();
								
								if(action==1)
								{
									Deadend9:
									printf("\n");
									printf("You investigate the room: You discover a small pathway, it appears big enough to crawl through.\n Do you, Crawl through(1), continue to investigate room(2) or go back(3)?\n");
									printf("\n");
									printf("Enter response:");
									action = scan123();						
									if(action==1)
									{
										Deadend10:
										printf("\n");
										printf("You crawl into a small room, in one corner there's a small chest, in the other: A bookshelf.\n Do you, investigate the chest(1) or the bookshelf(2)?\n Go Back(3)\n");
										printf("\n");
										printf("Enter response:");
										action = scan123();
										if(action==3)
										{
											goto Deadend9;
										}
										if(action==1)
										{
											Deadend11:
											printf("\n");
											printf("You decide to search the chest: it's covered in dust and the wood is clearly rotten.\n Do you, Open Chest(1) or go back(2).\n");
											printf("\n");
											printf("Enter response:");
											action = scan12();
											if(action==1)
											{
												printf("\n");
												printf("You try to open the chest, but it is locked.\n Unlock(1)?\n");
												printf("\n");
												printf("Enter response:");
												action=scan1();
												if(haskey==0)
												{
													printf("\n");
													printf("You do not have the key to unlock the chest.\n Go back(1)\n");
													printf("\n");
													printf("Enter response:");
													action = scan1();
													
													if(action==1)
													{
														goto Deadend10;
													}
												}
												else if(haskey==1)
												{
													printf("\n");
													printf("The key fits: Inside the chest is a note.\n It reads,'3467'.\n Do you, hangon to note(1) or Leave note(2)?\n");
													printf("\n");
													printf("Enter response:");
													action = scan12();
													
													if(action==1)
													{
														Deadend14:
														(hasnote=1);
														printf("\n");
														printf("You have obtained a note.\n the mysterious code intregues you. Do you, read the note outloud(1) or investigate bookshelf(2)?\n");
														printf("\n");
														printf("Enter response:");
														action = scan12();
														if(action==1)
														{
															printf("\n");
															printf("You read the note outloud: Nothing happens.\n Go to bookshelf(1).\n");
															printf("\n");
															printf("Enter response:");
															action = scan1();
															if(action==1)
															{
																goto Deadend12;
															}
														}
														else
														{
															goto Deadend12;
														}
													}
													else
													{
														(hasnote=0);
														printf("\n");
														printf("Are you sure?\n Grab note(1) or leave chest(2).\n");
														printf("\n");
														printf("Enter response:");
														action = scan12();
														if(action==1)
														{
															(hasnote=1);
															goto Deadend12;
														}
														else
														{
															(hasnote=0);
															goto Deadend10;
														}
													}
												}
											}
											else if(action==2)
											{
												goto Deadend10;	
											}
										}
										else
										{
											Deadend12:	
											printf("\n");								
											printf("You walk over to the bookshelf, it's over stuffed with old books.\n Three books stand out to you: a red book, a green book, and a blue book.\n");
											Deadend13:
											printf("\n");
											printf("Which do you grab first, the red book(1) the green book(2) or the blue book(3)?\n");
											printf("\n");
											printf("Enter response:");
											action = scan123();
											if(action==1)
											{
												printf("\n");
												printf("You grabbed the red book: Which book next?\n The green book(2) or blue book(3)?\n");
												printf("\n");
												printf("Enter response:");
												action = scan23();
												if(action==2)
												{
													printf("\n");
													printf("You grab the green book: You then grab the blue book.\n The pages of the first two books are blank.\n Try again(1)?\n");
													printf("\n");
													printf("Enter response:");
													action = scan1();
													if(action==1)
													{
													
														goto Deadend13;
													
													}	
												}
												else
												{
													printf("\n");
													printf("You grab the blue book: You then grab the green book\n The pages of all three books are blank.\n Try again(1)?\n");
													printf("\n");
													printf("Enter response:");
													action = scan1();
													if(action==1)
													{
														goto Deadend13;	
													}		
												}
											}
											else if(action==2)
											{
												printf("\n");
												printf("You grabbed the green book: Which book next?\n The red book(1) or the blue book(3)?\n");
												printf("\n");
												printf("Enter response:");
												action = scan13();
												if(action==1)
												{
													printf("\n");
													printf("You grab the red book: You then grab the blue book.\n The pages of the books are covered in numbers.\n");
													printf("However, in the middle of the pages are blank rectangles.\n Do you, Write on the pages(1)?\n");
													printf("\n");
													printf("Enter response:");
													action = scan1();
													if(action==1)
													{
														if(haspen==1)
														{
															printf("\n");
															printf("What do you write?\n The code from the note(1)?\n");
															printf("\n");
															printf("Enter response:");
															action = scan1();
															if(hasnote==1)
															{
																printf("\n");
																printf("You write the code down in each book: The room starts tremble.\n Suddenly, it stops.\n You hear a thud in the other room.\n go back(1)\n");
																printf("\n");
																printf("Enter response:");
																action = scan1();
																if(action==1)
																{
																	printf("\n");
																	printf("You crawl back trough the tunnel into the previous room: Taking a look around, you see that the bookshelf has moved over revealing a hidden passage.\n Go through(1)?\n");
																	printf("\n");
																	printf("Enter response:");
																	action = scan1();
																	if(action==1)
																	{
																		printf("\n");
																	 	printf("You enter the passageway.\n The hallway is dark.\n The air feels heavy.\n Your heart starts to race as you near the end of the hallway.\n At the end stands an old wooden door.\n open door(1)?\n");
																	 	printf("\n");
																	 	printf("Enter response:");
																	 	action = scan1();
																	 	if(action==1)
																	 	{
																	 		if(hascandle==1)
																	 		{
																	 			if(hastoy==1)
																	 			{
																	 				if(haslighter==1)
																					{
																						printf("\n");
																					 	printf("You open the door: It slowly creaks open.\n The light from the hall barely shines on a candle stand.\n Place candle on stand(1)?\n");
																					 	printf("\n");
																					 	printf("Enter response:");
																					 	action = scan1();
																					 	if(action==1)
																					 	{
																					 		printf("\n");
																					 		printf("You place the candle on the stand.\n Light the candle(1)?\n");
																					 		printf("\n");
																					 		printf("Enter response:");
																					 		action = scan1();
																					 		if(action==1)
																					 		{
																					 			printf("\n");
																					 			printf("Using your lighter you light the candle.\n Next to the candle holder is a skinny podium.\n Place toy(1)?\n");
																					 			printf("\n");
																					 			printf("Enter response:");
																					 			action = scan1();
																					 			if(action==1)
																					 			{
																					 				Deadend33:
																					 				printf("\n");
																									printf("The room becomes a bit brighter and warmer: You now see In the room sit three thrones.\n Next to the outter thrones are two large mirrors.\n ");
																						 			printf("You find an enscription on the wall behind the thrones that reads:\n");
																						 			printf("\n");
																									 printf("'The Queen gazes through a mirror, she sees the one she loves passed the one she hates.\n The jack complains that the light is too bright.\n The King stairs through you.'\n");
																									 printf("\n");
																						 			printf("According to the legend you need to sit in the the King's throne.\n Which throne do you sit in?\n");
																						 			printf("The left throne(1) the middle throne(2) or the right throne(3)?\n");
																						 			printf("\n");
																						 			printf("Enter response:");
																						 			action = scan123();
																						 			if(action==1)
																						 			{
																						 				printf("\n");
																						 				printf("You chose to sit in the left throne:\n As you sit on the throne the door slams shut.\n");
																						 				printf("\n");
																										printf("\n You feel as sudden anger corse through your body.\n The light swiftly goes out.\n Whispers start surrounding you.\n whispers turn to screams.\n eventually you blackout.\n Those are your last memories.\n");
																										printf("\n");
																						 				printf("Press '1' to Continue");
																										action = scan1();
																										if(action==1)
																						 				{
																						 					printf("\n");
																						 					printf("Bad end.\n Try again(1) or exit game(2)?\n");
																						 					printf("\n");
																						 					printf("Enter response:");
																						 					action = scan12();
																						 					if(action==1)
																							 				{
																							 					goto Deadend33;
																											}
																											else if(action==2)
																											{
																												printf("\n");
																												printf("Exiting the program...\n");
																											 	printf("End of the program...\n");
																											 	printf("\n");
																											 	printf("Goodbye\n");
																											 	return(0);
																											}
																										}
																									}
																									else if(action==2)
																									{
																										printf("\n");
																										printf("You chose to sit in the middle throne: As you sit down on the throne the door closes.\n");
																										printf("\n");
																										printf("\n You stair forward and calmly watch as the candle light filckers.\n The air is still and peaceful.\n You successfully preformed the legended ritual.\n Your greatest wish in life will be granted.\n");
																										printf("\n");
																										printf("Press '1' to Continue:");
																										action = scan1();
																										if(action==1)
																						 				{
																						 					printf("\n");
																						 					printf("Good end.\n Try again(1) or exit game(2)?\n");
																						 					printf("\n");
																						 					printf("Enter response:");
																						 					action = scan12();
																						 					if(action==1)
																							 				{
																							 					goto Deadend33;
																											}
																											else if(action==2)
																											{
																												printf("\n");
																												printf("Exiting the program...\n");
																											 	printf("End of the program...\n");
																											 	printf("\n");
																											 	printf("Goodbye\n");
																											 	return(0);
																											}
																										}
																									}
																									else
																									{
																										printf("\n");
																										printf("You chose to sit in the right throne: As you sit in the throne the door slams shut.");
																										printf("\n");
																										printf("You are then consumed by hatred.\n The light swiftly goes out.\n You find yourself looking at the mirror next you.\n You see a beast in it.\n You then realize that the beast is you.\n Your feelings or hatred become those of misery.\n  Tears stream down your face, they grow into sobs, you continue to cry untll you waiste away.\n");
																										printf("\n");
																										printf("Press '1' to Continue");
																										action = scan1();
																										if(action==1)
																						 				{
																						 					printf("Bad end.\n Try again(1) or exit game(2)?\n");
																						 					printf("\n");
																						 					printf("Enter response:");
																						 					action = scan12();
																						 					if(action==1)
																							 				{
																							 					goto Deadend33;
																											}
																											else if(action==2)
																											{
																												printf("\n");
																												printf("Exiting the program...\n");
																											 	printf("End of the program...\n");
																											 	printf("\n");
																											 	printf("Goodbye\n");
																											 	return(0);
																											}
																										}
																									}
																					 			}
																							}
																						}
																					}
																					else if(haslighter==0)
																					{
																						Deadend32:
																						printf("\n");
																	 					printf("You do not have the items necissary to continue.\n Go to beinning of the cave(1)?\n");
																	 					printf("\n");
																	 					printf("Enter response");
																	 					action = scan1();
																	 					if(action==1)
																	 					{
																	 						goto Deadend4;
																						}
																	 				}
																	 			}
																				else if(hastoy==0)
																				{
																					goto Deadend32;
																				}
																			}
																			else if(hascandle==0)
																			{
																				goto Deadend32;
																			}
																		}
																	}
																}						
															}
															else if(hasnote==0)
															{
																printf("\n");
																printf("You do not have the note.\n Go back(1)?\n");
																printf("\n");
																printf("Enter response:");
																action = scan1();
																if(action==1)
																{
																	goto Deadend10;
																}
															}
														}
														else if(haspen==0)
														{
															printf("\n");
															printf("You do not have the pen.\n Go back(1)?\n");
															printf("\n");
															printf("Enter response:");
															action = scan1();
															if(action==1)
															{
																goto Deadend10;
															}
														}
													}
												}
												else
												{
													printf("\n");
													printf("You grab the blue book: You then grab the red book.\n The pages of the last two books are blank.\n Try again(1)?\n");
													printf("\n");
													printf("Enter response:");
													action = scan1();
													if(action==1)
													{	
														goto Deadend13;
													}	
												}
											}
											else
											{
												printf("\n");
												printf("You grabbed the blue book: Which book next?\n The red book(1) or the green book(2)?\n");
												printf("\n");
												printf("Enter response:");
												action = scan12();
												if(action==1)
												{
													printf("\n");
													printf("You grab the red book: You then grab the green book.\n The pages of the first and last books are blank.\n Try again(1)?\n");
													printf("\n");
													printf("Enter response:");
													action = scan1();
													if(action==1)
													{
														goto Deadend13;
													}
												}
												else if(action==2)
												{
													printf("\n");
													printf("You grab the green book: You then grab the red book.\n The pages of all three books are blank.\n Try again(1)?\n");
													printf("\n");
													printf("Enter response:");
													action = scan1();
													if(action==1)
													{
														goto Deadend13;
													}
												}
											}
										}
									}
									else if(action==2)
									{
										goto Deadend25;
										{
											Deadend26:
											printf("\n");
											printf("You decide to continue searching the room. In the room there is: A desk, a bookshelf, and a dresser.\n");
											printf("Where do you search?\n The desk(1), the bookshelf(2), or the dresser(3)?\n");
											printf("\n");
											printf("Enter response:");
											location = scan123();
											if(location==1)
											{
												Deadend18:
												printf("\n");
												printf("You decide to search the desk.\n You walk over to the desk: The desk is bare, except for a note which reads:\n");
												printf("\n");
												printf("'Go to the one drawn to the core,\n then to the one closest to the sun,\n last to the medium between the two.'\n");	
												printf("\n");
												printf("Below the desk there are three drawers, which do you search first?\n The top drawer(1) the middle drawer(2) or the last drawer(3)?\n");
												printf("\n");
												printf("Enter response:");
												action = scan123();
												if(action==1)
												{
													printf("\n");
													printf("You open the first drawer: Inside is empty.\n Which drawer do you open next?\n The middle drawer(1) or the last drawer(2)?\n");
													printf("\n");
													printf("Enter response:");
													action = scan12();
													if(action==1)
													{
														printf("\n");
														printf("You open the middle drawer: Inside is a blank piece of paper.\n You then open the last drawer: Inside is empty.\n Try again(1)?\n");
														printf("\n");
														printf("Enter response:");
														action = scan1();
														if(action==1)
														{
															goto Deadend18;	
														}
													}
													else
													{
														printf("\n");
														printf("You open the last drawer: The inside is a blank piece of paper.\n You then open the middle drawer: The Inside is empty.\n Try again(1)?\n");
														printf("\n");
														printf("Enter response:");
														action = scan1();
														if(action==1)
														{
															goto Deadend18;	
														}
													}
												}
												else if(action==2)
												{
													printf("\n");
													printf("You open the middle drawer: Inside is empty.\n Which drawer do you open next?\n The first drawer(1) or the last drawer(2)?\n");
													printf("\n");
													printf("Enter response:");
													action = scan12();
													if(action==1)
													{
														printf("\n");
														printf("You open the first drawer: Inside is a blank piece of paper.\n You then open the last drawer: Inside is empty.\n Try again(1)?\n");
														printf("\n");
														printf("Enter response:");
														action = scan1();
														if(action==1)
														{
															goto Deadend18;	
														}
													}
													else
													{
														printf("\n");
														printf("You open the last drawer: The inside is empty.\n You then open the first drawer: The Inside is empty.\n Try again(1)?\n");
														printf("\n");
														printf("Enter response:");
														action = scan1();
														if(action==1)
														{
															goto Deadend18;	
														}
													}
												}
												else
												{
													printf("\n");
													printf("You open the last drawer: Inside is a blank piece of paper.\n Which drawer do you open next?\n The first drawer(1) or the middle drawer(2)?\n");
													printf("\n");
													printf("Enter response:");
													action = scan12();
													if(action==1)
													{
														printf("\n");
														printf("You open the first drawer: Inside is another blank piece of paper.\n You then open the middle drawer: Inside is a small key.\n Pickup key(1) or go back(2)?\n");
														printf("\n");
														printf("Enter response:");
														action = scan12();
														if(action==1)
														{
															(haskey=1);
															printf("\n");
															printf("You obtain a key.\n Go back(1).\n");
															printf("\n");
															printf("Enter response:");
															action = scan1();
															if(action==1)
															{
																goto Deadend25;
															}
														}
													}
													else
													{
														printf("\n");
														printf("You open the middle drawer: The inside is empty.\n You then open the last drawer: Inside is empty.\n Try again(1)?\n");
														printf("\n");
														printf("Enter response:");
														action = scan1();
														if(action==1)
														{
															goto Deadend18;	
														}	
													}
												}
											}
											else if(location==2)
											{
												Deadend16:
												printf("\n");
												printf("You decide to search the bookshelf.\n You walk over to the desk: From far away it appears very orderly.\n However, as you get closer to the shelf something looks off.\n Feel the bookshelf(1)?\n");
												printf("\n");
												printf("Enter response:");
												action = scan1();
												if(action==1)
												{
													printf("\n");
													printf("You feel the books: They feel wooden, you then try and pull on the books: They don't move.\n The books are fake.\n");
													printf("However, on the shelf: There is a small stuffed animal, you don't know why, but the toy feels very familier.\n Take toy(1)?\n");
													printf("\n");
													printf("Enter response:");
													action = scan1();
													if(action==1)
													{
														(hastoy=1);
														printf("\n");
														printf("You have obtained a toy.\n Go back(1)?\n");
														printf("\n");
														printf("Enter response:");
														action = scan1();
														if(action==1)
														{
															goto Deadend25;
														}	
													}
												}
											}
											else
											{
												Deadend17:
												printf("\n");
												printf("You decide to search the dresser.\n You walk over to the dresser: On the dresser is a chart, a chart for binary color codes.\n On the chart, three colors are highlighted:\n");
												printf("\n");
												printf("Orange:1655\n Lime:376\n Grape:261\n");
												printf("\n");
												printf("The dresser has three drawers.\n Which do you open first?\n The first drawer(1) the middle drawer(2) or the last drawer(3)?\n");
												printf("\n");
												printf("Enter response:");
												action = scan123();
												if(action==1)
												{
													printf("\n");
													printf("You pull on the first drawer: The drawer opens.\n Which drawer do you open next?\n The middle drawer(1) or the last drawer(2)?\n");
													printf("\n");
													printf("Enter response:");
													action = scan12();
													if(action==1)
													{
														printf("\n");
														printf("You pull on the middle drawer: It won't budge.\n Try again(1)?\n");
														printf("\n");
														printf("Enter response:");
														action = scan1();
														if(action==1)
														{
															goto Deadend17;
														}
													}
													else
													{
														printf("\n");
														printf("You pull on the last drawer: It opens.\n You then pull open the middle drawer: You find a small black candle inside.\n Take candle(1)?\n");
														printf("\n");
														printf("Enter response:");
														action = scan1();
														if(action==1)
														{
															(hascandle=1);
															printf("\n");
															printf("You have obtained a candle.\n Go back(1)?\n");
															printf("\n");
															printf("Enter response:");
															action = scan1();
															if(action==1)
															{													
																goto Deadend25;																													
															}	
														}
													}
												}
												else if(action==2)
												{
													printf("\n");
													printf("You pull on the middle drawer: The drawer won't budge.\n Try again(1)?\n");
													printf("\n");
													printf("Enter response:");
													action = scan1();
													if(action==1)
													{
														goto Deadend17;
													}
												}
												else
												{
													printf("\n");
													printf("You pull on the last drawer: The drawer won't budge.\n Try again(1)?\n");
													printf("\n");
													printf("Enter response:");
													action = scan1();
													if(action==1)
													{
														goto Deadend17;
													}
												}
											}
										}
									}
									else
									{
										goto Deadend4;
									}
								}
								else if(action==2)
								{
									goto Deadend4;
								}	
							}
							else if(direction==2)
							{
								Deadend6:
								printf("\n");
								printf("You come across a skeleton, it appears to be human.\n Search the skeleton(1) or go back(2)?\n");
								printf("\n");
								printf("Enter response:");
								action = scan123();
								//scanf("%d", &action);
								
								 if(action==1)
								{
									Deadend31:
									printf("\n");
									printf("You decide to search the skeleton: where do you search?\n The skull(1) or the rib cage(2)?\n");
									printf("\n");
									printf("Enter response:");
									location = scan12();
									if(location==1)
									{
										Deadend19:
										printf("\n");
										printf("You search the skull: On the back is a large hole.\n Look inside(1) or go back(2)?\n");
										printf("\n");
										printf("Enter response:");
										action = scan12();
										if(action==1)
										{
											printf("\n");
											printf("You look in the hole: Inside you see a small item, however, your hand is too large to fit in the hole.\n The neck bone does seem fragle.\n");
											printf("Remove skull(1) or go back(2)?\n");
											printf("\n");
											printf("Enter response:");
											action = scan12();
											if(action==1)
											{
												printf("\n");
												printf("You grab the skull and pull: You hear a snap as the skull comes off.\n You then shake the skull until the small object falls out and scaters on the floor.\n Grab item(1)?\n");
												printf("\n");
												printf("Enter response:");
												action = scan1();
												if(action==1)
												{
													(haslighter=1);
													printf("\n");
													printf("You grab the small metal object off the ground: It turns out to be a lighter.\n go back(1)?\n");
													printf("\n");
													printf("Enter response:");
													action = scan1();
													if(action==1)
													{
													
														goto Deadend30;
														
													}
												}	
											}
											else if(action==2)
											{
												goto Deadend6;
											}	
										}
										else if(action==2)
										{
											goto Deadend6;
										}	
									}
									else if(location==2)
									{
										Deadend20:
										printf("\n");
										printf("You search the rib cage: In the rib cage lies an ink pen.\n Grab pen(1)?\n");
										printf("\n");
										printf("Enter response:");
										action = scan1();
										if(action==1)
										{
											(haspen=1);
											printf("\n");
											printf("You have obtained a pen.\n Go back(1)?\n");
											printf("\n");
											printf("Enter response:");
											action = scan12();
											if(action==1)
											{
												goto Deadend30;
											}
										}
									}
								}
								else if(action==2)
								{
									goto Deadend4;
								}
												Deadend30:
												if(haspen==1)
												{
													if(haslighter==1)
													{
														Deadend21:
														printf("\n");
													 	printf("You go to the previous intersection: The left path lies ahead of you.\n Do you follow it(1)?\n");
													 	printf("\n");
													 	printf("Enter response:");
													 	action = scan1();
													 	if(action==1)
													 	{
													 		goto Deadend5;
														}
													}
													else if(haslighter==0)
													{
														printf("\n");
														printf("The only place left to search is the skull.\n Search skull(1)?\n");
														printf("\n");
														printf("Enter response:");
														action = scan1();
														if(action==1)
														{
															goto Deadend19;
														}
													}
												}
												if(haspen==0)
												{
													if(haslighter==1)
													{
														printf("\n");
														printf("The only place left to search is the rib cage.\n Search rib cage(1)?\n");
														printf("\n");
														printf("Enter response:");
														action = scan1();
														if(action==1)
														{
															goto Deadend20;
														}
													}
													else if(haslighter==0)
													{
														goto Deadend6;
													}
												}
							}
						}
						else if(location==2)
						{
							goto Deadend2;
						}
					}
			}
			else
			{
				Deadend7:
				printf("\n");
				printf("You went right: A large clif stands in your way.\n Go back(1) or jump off(2)\n");
				printf("\n");
				printf("Enter response:");
				location = scan12();
				
					
				if(location==1)
				{
					goto Deadend1;
				}
				else
				{
					printf("\n");
					printf("You died.\n Congradulations.\n Go back(1).\n");
					printf("\n");
					printf("Enter response:");
					action = scan1();
					{
						goto Deadend1;
					}
				}
			}
				
						 	Deadend25:
							if(haskey==1)
							{
								if(hascandle==1)
								{
									if(hastoy==1)
									{
										printf("\n");
										printf("The only thing left to invesigate in the room in the small tunnel.\n Crawl through(1)?\n");
										printf("\n");
										printf("Enter response:");
										action = scan1();
										if(action==1)
										{
											goto Deadend10;
										}
									}
										if(hastoy==0)
										{
											printf("\n");
											printf("The only thing left to invesigate in the room is the bookshelf.\n Search bookshelf(1)?\n");
											printf("\n");
											printf("Enter response:");
											action = scan1();
											if(action==1)
											{
												goto Deadend16;
											}
										}
								}
								else if(hascandle==0)
								{
									if(hastoy==1)
									{
										printf("\n");
										printf("The only thing left to invesigate in the room is the dresser.\n Search dresser(1)?\n");
										printf("\n");
										printf("Enter response:");
										action = scan1();
										if(action==1)
										{
											goto Deadend17;
										}
									}
									else if(hastoy==0)
									{
										printf("\n");
										printf("You take a look at the room: There are only two places left to search.\n Where do you search next?\n Dresser(1) or the bookshelf(2)?\n");
										printf("\n");
										printf("Enter response:");
										action = scan12();
										if(action==1)
										{
											goto Deadend17;
										}
										else if(action==2)
										{
											goto Deadend16;
										}
									}	
								}
							}
							else if(haskey==0)
							{
								if(hascandle==1)
								{
									if(hastoy==1)
									{
										printf("\n");
										printf("The only thing left to invesigate in the room is the desk.\n Search desk?(1)?\n");
										printf("\n");
										printf("Enter response:");
										action = scan1();
										if(action==1)
										{
											goto Deadend18;
										}					
									}
									else if(hastoy==0)
									{
										printf("\n");
										printf("You take a look at the room: There are only two places left to search.\n Where do you search next?\n Desk(1) or the bookshelf(2)?\n");
										printf("\n");
										printf("Enter response:");
										action = scan12();
										if(action==1)
										{
											goto Deadend18;
										}
										else if(action==2)
										{
											goto Deadend16;
										}								
									}
								}
								else if(hascandle==0)
								{
									if(hastoy==1)
									{
										printf("\n");
										printf("You take a look at the room: There are only two places left to search.\n Where do you search next?\n Dresser(1) or the desk(2)?\n");
										printf("\n");
										printf("Enter response:");
										action = scan12();
										if(action==1)
										{
											goto Deadend17;
										}
										else if(action==2)
										{
											goto Deadend18;
										}			
									}
									else if(hastoy==0)
									{
										goto Deadend26;							
									}							
								}
							}
		}
		else if(intro==0)
		{
			printf("/n");
			printf("Exiting the program...\n");
	 		printf("End of the program...\n");
	 		printf("\n");
	 		printf("Goodbye\n");
	 		return(0);
		
	 	}
}	
int scan1()
{
 	int x;
 	scanf("%d", &x);
	if(x==1)
	{
	return x;
	}
	else
	{
	 x = scan1();
	}
}
int scan10()
{
	int x;
	scanf("%d", &x);
	if(x==1 || x==0)
	{
		return x;
	}
	else
	{
		x = scan10();
	}
}
int scan12()
{
	int x;
	scanf("%d", &x);
	if(x==1 || x==2)
	{
		return x;
	}
	else
	{
		 x = scan12();
	}
}
int scan13()
{
	int x;
	scanf("%d", &x);
	if(x==1 || x==3)
	{
		return x;
	}
	else
	{
		 x = scan13();
	}
}
int scan23()
{
	int x;
	scanf("%d", &x);
	if(x==2 || x==3)
	{
		return x;
	}
	else
	{
		x = scan23();
	}
}
int scan123()
{
	int x;
	scanf("%d", &x);
	if(x==1 || x==2 || x==3)
	{
		return x;
	}
	else
	{
	 	x = scan123();
	}
}





