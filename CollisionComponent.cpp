#include "CollisionComponent.h"

CollisionComponent::CollisionComponent(float width, float height, Entity* entity)
: mCollisionRect(sf::Vector2f(width, height))
{
	mComponentType = EntityComponent::COMPONENT_TYPE::COLLISION;
	mParentEntity = entity;
}

void CollisionComponent::update(sf::Time deltaTime)
{
	mCollisionRect.setPosition(mParentEntity->getPosition());
}