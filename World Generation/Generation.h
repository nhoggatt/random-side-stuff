#ifndef GENERATION_H
#define GENERATION_H

#include <vector>
#include <map>
#include "Sprawl.h"
#include "Perlin.h"
#include "TileInfo.h"

namespace Generation
{

	//New order land/elevation -> water -> paint terrain -> landmarks -> roads


	class Generate{
		/*==Generation Variables==*/
		//General

	private:
		int layer = 0;
		enum Method { Perlin_Sprawl, Sprawl };
		Method currentMethod = Perlin_Sprawl;


	public:

		TileInfo ** HeightMap = NULL;
		TileInfo *** Map = NULL;
		std::vector<Zone> * Zones = NULL;

		int chunk_length = 10;
		int chunk_width = 10;
		int chunk_height = 10;

		void DisplayLayer(int layer);
		void DisplayLayers();
		void HeightToMap();
		void sprawl();
		void perlin_sprawl();

	};
}

#endif