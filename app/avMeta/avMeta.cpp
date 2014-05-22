#include <AvTranscoder/InputFile.hpp>
#include <AvTranscoder/Metadatas/Print.hpp>

#include <iostream>

int main( int argc, char** argv )
{
	if( argc != 2 )
	{
		std::cout << "avmeta require a media filename" << std::endl;
		return( -1 );
	}

	avtranscoder::InputFile input( argv[1] );
	input.analyse();

	// a simply metadata display
	displayMetadatas( input );
}
