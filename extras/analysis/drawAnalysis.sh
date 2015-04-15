echo
echo "======== Draw tree statistics =========="
echo "Complete draw tree is in draws.txt"
echo
echo "Total number of draws: " `cat draws.txt | wc -l`
echo "  transpositions: " `grep transp draws.txt | wc -l`
echo "  proven: " `grep proven draws.txt | wc -l`
echo "  97%:    " `grep 97% draws.txt | wc -l`
echo "  91%:    " `grep 91% draws.txt | wc -l`
echo "  70%:    " `grep 70% draws.txt | wc -l`
echo "  60%:    " `grep 60% draws.txt | wc -l`
echo "  29:    " `grep 29 draws.txt | wc -l`

