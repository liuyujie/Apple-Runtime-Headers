//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDSampleSyncEntity.h>

#import "HDNanoSyncEntity.h"

@class NSString;

@interface HDDeletedSampleSyncEntity : HDSampleSyncEntity <HDNanoSyncEntity>
{
}

+ (_Bool)_insertObjectsFromCodableObjectCollection:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)_baseDataObjectPredicate;
+ (Class)healthEntityClass;
+ (id)syncEntityIdentifier;
+ (id)_companionNanoSyncPredicateConjunctionForSession:(id)arg1;
+ (unsigned int)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (int)nanoSyncObjectType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

