set -e
echo "Installing branch $1";
git pull origin $1;
git checkout $1;
cd ..;
tar -cvvzf nnet.tar.gz nnet;
R CMD INSTALL nnet.tar.gz;

