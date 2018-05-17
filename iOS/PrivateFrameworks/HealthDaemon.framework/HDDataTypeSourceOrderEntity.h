//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDDataTypeSourceOrderEntity : HDHealthEntity
{
}

+ (id)propertyForSyncProvenance;
+ (id)_orderedSourceIDsForType:(id)arg1 userOrdered:(_Bool *)arg2 database:(id)arg3 error:(id *)arg4;
+ (id)orderedSourceIDsForType:(id)arg1 userOrdered:(_Bool *)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)_saveOrderedSourceIDs:(id)arg1 dataTypeCode:(long long)arg2 userOrdered:(_Bool)arg3 syncProvenance:(long long)arg4 database:(id)arg5 error:(id *)arg6;
+ (_Bool)saveOrderedSourceIDs:(id)arg1 type:(id)arg2 userOrdered:(_Bool)arg3 profile:(id)arg4 error:(id *)arg5;
+ (id)joinClausesForProperty:(id)arg1;
+ (long long)protectionClass;
+ (id)indices;
+ (id)columnsDefinition;
+ (id)tableAliases;
+ (id)databaseTable;

@end
