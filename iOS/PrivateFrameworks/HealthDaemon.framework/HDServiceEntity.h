//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDServiceEntity : HDHealthEntity
{
}

+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (id)_servicesInDatabase:(id)arg1 profile:(id)arg2 removals:(id *)arg3;
+ (_Bool)setHealthUpdatesEnabled:(_Bool)arg1 forDevice:(id)arg2 inDatabase:(id)arg3 error:(id *)arg4;
+ (_Bool)healthUpdatesEnabledForDevice:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
+ (id)allServicesWithProfile:(id)arg1 error:(id *)arg2;
+ (_Bool)deleteService:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)insertOrUpdateService:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)_servicePredicate:(id)arg1;
+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (id)columnsDefinition;
+ (id)tableAliases;
+ (id)databaseTable;

@end
