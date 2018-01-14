#include "match.h"

Match::Match(QObject *parent) : Person(parent)
{

}

Match::Match(QString id, QString name, QDateTime birthDate, Sailfinder::Gender gender, QString bio, int distance, QList<School *> schools, QList<Job *> jobs, QList<Photo *> photos, QString matchId, bool isSuperlike, bool isDead)
{
    this->setId(id);
    this->setName(name);
    this->setBirthDate(birthDate);
    this->setGender(gender);
    this->setBio(bio);
    this->setDistance(distance);
    this->setSchools(schools);
    this->setJobs(jobs);
    this->setPhotos(photos);
    this->setMatchId(matchId);
    this->setIsSuperlike(isSuperlike);
    this->setIsDead(isDead);
}

int Match::distance() const
{
    return m_distance;
}

void Match::setDistance(int distance)
{
    m_distance = distance;
    emit this->distanceChanged();
}

QString Match::matchId() const
{
    return m_matchId;
}

void Match::setMatchId(const QString &matchId)
{
    m_matchId = matchId;
    emit this->matchIdChanged();
}

bool Match::isSuperlike() const
{
    return m_isSuperlike;
}

void Match::setIsSuperlike(bool value)
{
    m_isSuperlike = value;
    emit this->isSuperlikeChanged();
}

bool Match::isDead() const
{
    return m_isDead;
}

void Match::setIsDead(bool value)
{
    m_isDead = value;
    emit this->isDeadChanged();
}
