//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSArray;

@interface HMDLocationCluster : NSObject
{
    NSArray *_groups;
    CLLocation *_homeLocation;
    NSArray *_locations;
    unsigned int _numOfClusters;
}

@property(nonatomic) unsigned int numOfClusters; // @synthesize numOfClusters=_numOfClusters;
@property(copy, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(readonly, nonatomic) CLLocation *homeLocation; // @synthesize homeLocation=_homeLocation;
@property(readonly, nonatomic) NSArray *groups; // @synthesize groups=_groups;
- (void).cxx_destruct;
- (void)printGroups:(id)arg1;
- (void)calculateHomeLocationFromGroups;
- (id)generateNewGroupsFromGroups:(id)arg1;
- (void)clusterWithGroups:(id)arg1;
- (void)startKMeans;
- (void)startGrouping;
- (id)initWithLocations:(id)arg1;

@end

