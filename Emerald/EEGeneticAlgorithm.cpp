#include "EEGeneticAlgorithm.h"


//----------------------------------------------------------------------------------------------------
namespace Emerald
{
	// EEChromosome
	//----------------------------------------------------------------------------------------------------
	EEChromosome::EEChromosome()
	{

	}

	//----------------------------------------------------------------------------------------------------
	EEChromosome::~EEChromosome()
	{

	}

	// EEGeneController
	//----------------------------------------------------------------------------------------------------
	EEGeneController::EEGeneController()
		:
		m_maxPopulationSize(0),
		m_crossoverRate(0.f),
		m_mutationRate(0.f),
		m_geneLength(0),
		m_geneTranslation(),
		m_chromosomes()
	{

	}

	//----------------------------------------------------------------------------------------------------
	EEGeneController::~EEGeneController()
	{

	}

	//----------------------------------------------------------------------------------------------------
	bool EEGeneController::Update()
	{

		return true;
	}

	//----------------------------------------------------------------------------------------------------
	bool EEGeneController::Render()
	{
		return true;
	}

	//----------------------------------------------------------------------------------------------------
	bool EEGeneController::Process()
	{
		return true;
	}

	//----------------------------------------------------------------------------------------------------
	void EEGeneController::Crossover()
	{
		
	}

	//----------------------------------------------------------------------------------------------------
	void EEGeneController::Mutate()
	{

	}
}