# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgramati <rgramati@42angouleme.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/30 18:37:30 by rgramati          #+#    #+#              #
#    Updated: 2023/07/30 18:50:34 by rgramati         ###   ########.fr        #
#                                                                              #
# *****************************************************************************#
RED='\033[0;31m'
NC='\033[0;35m'
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
WHITE='\033[1;37m'
MARRON='\033[1;31m'
BLACK='\033[0;30m'
echo "\n\n"
echo "Voici l'affichage en différents langage pour le chiffre $1 :"
echo "\n\n"
sleep 2
echo "$WHITE░█████╗░███╗░░██╗░██████╗$RED░██╗░$WHITE░░░░░█████╗░██╗░██████╗
██╔══██╗████╗░██║██╔════╝$RED░██║░$WHITE░░░░██╔══██╗██║██╔════╝
$RED███████║██╔██╗██║██║░░██╗░██║░░░░░███████║██║╚█████╗░
██╔══██║██║╚████║██║░░╚██╗██║░░░░░██╔══██║██║░╚═══██╗
$WHITE██║░░██║██║░╚███║╚██████╔$RED╝████$WHITE███╗██║░░██║██║██████╔╝
╚═╝░░╚═╝╚═╝░░╚══╝░╚═════╝$RED░╚═══$WHITE═══╝╚═╝░░╚═╝╚═╝╚═════╝░"
echo "\n\n"
./rush-02 $1
echo "\n\n"
sleep 1
echo "$RED░█████╗░██████╗░███╗░░░███╗███████╗███╗░░██╗██╗███████╗███╗░░██╗
██╔══██╗██╔══██╗████╗░████║██╔════╝████╗░██║██║██╔════╝████╗░██║
$BLUE███████║██████╔╝██╔████╔██║█████╗░░██╔██╗██║██║█████╗░░██╔██╗██║
██╔══██║██╔══██╗██║╚██╔╝██║██╔══╝░░██║╚████║██║██╔══╝░░██║╚████║
$YELLOW██║░░██║██║░░██║██║░╚═╝░██║███████╗██║░╚███║██║███████╗██║░╚███║
╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░░░░╚═╝╚══════╝╚═╝░░╚══╝╚═╝╚══════╝╚═╝░░╚══╝" 
echo "\n\n"
./rush-02 "./dict/armenian.dict" $1
echo "\n\n"
sleep 1
echo "$RED███╗░░██╗░█████╗░$WHITE█$BLUE███$WHITE█$RED█╗░██╗░░░██╗███████╗░██████╗░██╗███████╗███╗░░██╗
$WHITE████╗░██║██╔══██╗█$BLUE█╔═$WHITE═██╗██║░░░██║██╔════╝██╔════╝░██║██╔════╝████╗░██║
$BLUE██╔██╗██║██║░░██║██████╔╝╚██╗░██╔╝█████╗░░██║░░██╗░██║█████╗░░██╔██╗██║
$WHITE██║╚████║██║░░██║█$BLUE█╔═$WHITE═██╗░╚████╔╝░██╔══╝░░██║░░╚██╗██║██╔══╝░░██║╚████║
$RED██║░╚███║╚█████╔╝$WHITE█$BLUE█║░$WHITE░$RED██║░░╚██╔╝░░███████╗╚██████╔╝██║███████╗██║░╚███║
$RED╚═╝░░╚══╝░╚════╝░$WHITE╚$BLUE═╝░$WHITE░$RED╚═╝░░░╚═╝░░░╚══════╝░╚═════╝░╚═╝╚══════╝╚═╝░░╚══╝"
echo "\n\n"
./rush-02 "./dict/norwegian.dict" $1
echo "\n\n"
sleep 1
echo "
$RED██╗███╗░░██╗██████╗░░█████╗░███╗░░██╗███████╗░██████╗██╗███████╗███╗░░██╗
██║████╗░██║██╔══██╗██╔══██╗████╗░██║██╔════╝██╔════╝██║██╔════╝████╗░██║
██║██╔██╗██║██║░░██║██║░░██║██╔██╗██║█████╗░░╚█████╗░██║█████╗░░██╔██╗██║
$WHITE██║██║╚████║██║░░██║██║░░██║██║╚████║██╔══╝░░░╚═══██╗██║██╔══╝░░██║╚████║
██║██║░╚███║██████╔╝╚█████╔╝██║░╚███║███████╗██████╔╝██║███████╗██║░╚███║
╚═╝╚═╝░░╚══╝╚═════╝░░╚════╝░╚═╝░░╚══╝╚══════╝╚═════╝░╚═╝╚══════╝╚═╝░░╚══╝"
echo "\n\n"
./rush-02 "./dict/indonesian.dict" $1
echo "\n\n"
sleep 1
echo "
$RED░██████╗███████╗██████╗░██████╗░███████╗
$RED██╔════╝$RED██$YELLOW╔═══$RED═╝██╔══██╗██╔══██╗██╔════╝
$BLUE╚█████╗░$RED█$YELLOW█$RED█$WHITE██$RED╗$YELLOW░$RED░$BLUE██████╔╝██████╦╝█████╗░░
$BLUE░╚═══██╗$RED█$WHITE█╔══╝░$RED░$BLUE██╔══██╗██╔══██╗██╔══╝░░
$WHITE██████╔╝$RED██$WHITE████$RED█╗$WHITE██║░░██║██████╦╝███████╗
$WHITE╚═════╝░$RED╚══════╝$WHITE╚═╝░░╚═╝╚═════╝░╚══════╝"
echo "\n\n"
./rush-02 "./dict/serbian.dict" $1
echo "\n\n"
sleep 1
echo "
$RED████████╗██╗░░░$WHITE██╗██$RED████╗░░█████╗░
╚══██╔══╝██║$WHITE░░░█$RED█║██╔══██╗██╔══██╗
░░░██║░░░$WHITE██║░$RED░░██║██████╔╝██║░░╚═╝
░░░██║░░░$WHITE██║░$RED░░██║██╔══██╗██║░░██╗
░░░██║░░░╚██$WHITE████$RED╔╝██║░░██║╚█████╔╝
░░░╚═╝░░░░╚═══$WHITE══╝░╚$RED═╝░░╚═╝░╚════╝░"
echo "\n\n"
./rush-02 "./dict/turkish.dict" $1
echo "\n\n"
sleep 1
echo "$BLUE██╗░░░██╗██╗░░██╗██████╗░░█████╗░██╗███╗░░██╗██╗███████╗███╗░░██╗
██║░░░██║██║░██╔╝██╔══██╗██╔══██╗██║████╗░██║██║██╔════╝████╗░██║
██║░░░██║█████═╝░██████╔╝███████║██║██╔██╗██║██║█████╗░░██╔██╗██║
$YELLOW██║░░░██║██╔═██╗░██╔══██╗██╔══██║██║██║╚████║██║██╔══╝░░██║╚████║
╚██████╔╝██║░╚██╗██║░░██║██║░░██║██║██║░╚███║██║███████╗██║░╚███║
░╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═╝╚═╝░░╚══╝╚═╝╚══════╝╚═╝░░╚══╝"
echo "\n\n"
./rush-02 "./dict/ukrainian.dict" $1
echo "\n\n"
sleep 1
echo "
$BLUE░████$WHITE█$BLUE╗$WHITE░$BLUE█$WHITE█$BLUE╗░░░██╗███████╗██████╗░███████╗██╗░░██╗
██╔══█$WHITE█$BLUE╗$WHITE█$BLUE█║░░░██║╚════██║██╔══██╗██╔════╝██║░██╔╝
$WHITE██║░░██║██║░░░██║░░███╔═╝██████╦╝█████╗░░█████═╝░
██║░░██║██║░░░██║██╔══╝░░██╔══██╗██╔══╝░░██╔═██╗░
$GREEN╚█████╔╝╚██████╔╝███████╗██████╦╝███████╗██║░╚██╗
░╚════╝░░╚═════╝░╚══════╝╚═════╝░╚══════╝╚═╝░░╚═╝"
echo "\n\n"
./rush-02 "./dict/uzbek.dict" $1
echo "\n\n"
sleep 5
echo "\n\n"
echo "$RED████████╗██████╗░░█████╗░██╗░░░░░██╗░░░░░  ██╗░░░░░░█████╗░███╗░░██╗░██████╗░░█████╗░░██████╗░███████╗
$NC╚══██╔══╝██╔══██╗██╔══██╗██║░░░░░██║░░░░░  ██║░░░░░██╔══██╗████╗░██║██╔════╝░██╔══██╗██╔════╝░██╔════╝
$GREEN░░░██║░░░██████╔╝██║░░██║██║░░░░░██║░░░░░  ██║░░░░░███████║██╔██╗██║██║░░██╗░███████║██║░░██╗░█████╗░░
$YELLOW░░░██║░░░██╔══██╗██║░░██║██║░░░░░██║░░░░░  ██║░░░░░██╔══██║██║╚████║██║░░╚██╗██╔══██║██║░░╚██╗██╔══╝░░
$BLUE░░░██║░░░██║░░██║╚█████╔╝███████╗███████╗  ███████╗██║░░██║██║░╚███║╚██████╔╝██║░░██║╚██████╔╝███████╗
$WHITE░░░╚═╝░░░╚═╝░░╚═╝░╚════╝░╚══════╝╚══════╝  ╚══════╝╚═╝░░╚═╝╚═╝░░╚══╝░╚═════╝░╚═╝░░╚═╝░╚═════╝░╚══════╝"
echo "\n\n"
echo "$YELLOW██████╗░██╗██╗░░██╗░█████╗░░█████╗░██╗░░██╗██╗░░░██╗
██╔══██╗██║██║░██╔╝██╔══██╗██╔══██╗██║░░██║██║░░░██║
██████╔╝██║█████═╝░███████║██║░░╚═╝███████║██║░░░██║
██╔═══╝░██║██╔═██╗░██╔══██║██║░░██╗██╔══██║██║░░░██║
██║░░░░░██║██║░╚██╗██║░░██║╚█████╔╝██║░░██║╚██████╔╝
╚═╝░░░░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝░╚════╝░╚═╝░░╚═╝░╚═════╝░"
echo "\n\n"
./rush-02 "./dict/troll_dict/pikachu.dict" $1
echo "\n\n"
echo "$GREEN░██████╗░██████╗░░█████╗░░█████╗░████████╗
██╔════╝░██╔══██╗██╔══██╗██╔══██╗╚══██╔══╝
██║░░██╗░██████╔╝██║░░██║██║░░██║░░░██║░░░
██║░░╚██╗██╔══██╗██║░░██║██║░░██║░░░██║░░░
╚██████╔╝██║░░██║╚█████╔╝╚█████╔╝░░░██║░░░
░╚═════╝░╚═╝░░╚═╝░╚════╝░░╚════╝░░░░╚═╝░░░"
echo "\n\n"
./rush-02 "./dict/troll_dict/tree.dict" $1
echo "\n\n"
echo "██████╗░░█████╗░███╗░$YELLOW░░███╗██$GREEN█╗░░░███╗██╗░░░██╗░██████╗
██╔══██╗██╔══██╗███$YELLOW█╗░████║████╗$GREEN░████║██║░░░██║██╔════╝
██████╔╝███████║██$YELLOW╔████╔█$GREEN█║$YELLOW██╔███$GREEN█╔██║██║░░░██║╚█████╗░
██╔══██╗██╔══██║█$YELLOW█║╚██╔╝$GREEN██║█$YELLOW█║╚██╔$GREEN╝██║██║░░░██║░╚═══██╗
██║░░██║██║░░██║$YELLOW██║░╚═╝$GREEN░██║██$YELLOW║░╚═╝░$GREEN██║╚██████╔╝██████╔╝
╚═╝░░╚═╝╚═╝░░╚═$YELLOW╝╚═╝░░░$GREEN░░╚═╝╚═╝$YELLOW░░░░░╚═$GREEN╝░╚═════╝░╚═════╝░"
echo "\n\n"
./rush-02 "./dict/troll_dict/turtle.dict" $1
echo "\n\n"