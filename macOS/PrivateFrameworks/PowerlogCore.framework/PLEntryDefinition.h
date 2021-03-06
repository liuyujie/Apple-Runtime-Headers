//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLEntryDefinition : NSObject
{
}

+ (id)sharedInstance;
+ (id)notificationNameForEntryKey:(id)arg1 withFilterDefintion:(id)arg2;
+ (int)limitOfType:(id)arg1 forEntryDefinition:(id)arg2;
+ (id)logSelectorStringForEntryDefinition:(id)arg1;
+ (short)aggregateFunctionForEntryDefinition:(id)arg1 forKey:(id)arg2;
+ (id)sortedKeysFromEntryDefinition:(id)arg1;
+ (id)manualSortOrderForEntryDefinition:(id)arg1;
+ (BOOL)cacheSQLPrepareStatementForEntryDefinition:(id)arg1;
+ (int)cacheCountForEntryDefition:(id)arg1;
+ (double)schemaVersionForEntryDefinition:(id)arg1;
+ (BOOL)overridesEntryDateForEntryDefinition:(id)arg1;
+ (BOOL)isAggregateWallClockBucketForEntryDefinition:(id)arg1;
+ (BOOL)isAggregateForEntryDefinition:(id)arg1;
+ (BOOL)filterEntryLoggingForEntryDefinition:(id)arg1;
+ (BOOL)isOnDemandQueryableForEntryDefinition:(id)arg1;
+ (BOOL)hasArrayKeysForEntryDefinition:(id)arg1;
+ (BOOL)hasDynamicKeysForEntryDefinition:(id)arg1;
+ (id)allAggregatePrimaryKeysForEntryDefinition:(id)arg1;
+ (id)allIndexKeysForEntryDefinition:(id)arg1;
+ (id)allAggregateKeysForEntryDefinition:(id)arg1;
+ (id)allDynamicKeysForEntryDefinition:(id)arg1;
+ (id)subEntryKeyKeyForEntryDefinition:(id)arg1;
+ (id)allKeysForEntryDefinition:(id)arg1;
+ (id)aggregateBucketDefinitionsForEntryDefinition:(id)arg1;
+ (id)arrayKeysForEntryDefinition:(id)arg1;
+ (id)dynamicKeyConfigsForEntryDefinition:(id)arg1;
+ (id)keyConfigsForEntryDefinition:(id)arg1;
+ (id)configsForEntryDefinition:(id)arg1;
+ (int)limitOfType:(id)arg1 forEntryKey:(id)arg2;
+ (id)logSelectorStringForEnteryKey:(id)arg1;
+ (id)manualSortOrderForEntryKey:(id)arg1;
+ (BOOL)cacheSQLPrepareStatementForEntryKey:(id)arg1;
+ (int)cacheCountForEntryKey:(id)arg1;
+ (double)schemaVersionForEntryKey:(id)arg1;
+ (BOOL)overridesEntryDateForEntryKey:(id)arg1;
+ (BOOL)isAggregateWallClockBucket:(id)arg1;
+ (BOOL)isAggregateForEntryKey:(id)arg1;
+ (BOOL)filterEntryLoggingForEntryKey:(id)arg1;
+ (BOOL)isOnDemandQueryableForEntryKey:(id)arg1;
+ (BOOL)hasArrayKeysForEntryKey:(id)arg1;
+ (BOOL)hasDynamicKeysForEntryKey:(id)arg1;
+ (id)allAggregatePrimaryKeysForEntryKey:(id)arg1;
+ (id)allIndexKeysForEntryKey:(id)arg1;
+ (id)allAggregateKeysForEntryKey:(id)arg1;
+ (id)allDynamicKeysForEntryKey:(id)arg1;
+ (id)subEntryKeyKeyForEntryKey:(id)arg1;
+ (id)allKeysForEntryKey:(id)arg1;
+ (id)aggregateBucketDefinitionsForEntryKey:(id)arg1;
+ (id)arrayKeysForEntryKey:(id)arg1;
+ (id)dynamicKeyConfigsForEntryKey:(id)arg1;
+ (id)keyConfigsForEntryKey:(id)arg1;
+ (id)configsForEntryKey:(id)arg1;
+ (id)definitionForEntryKey:(id)arg1;
+ (id)entryDefinitionsForOperator:(id)arg1;
+ (id)pruneEmptyValueEntryFromDict:(id)arg1;
+ (id)entryDefinitionsForOperatorClass:(Class)arg1;
- (id)commonTypeDict_DateFormat_isCFAbsoluteTime;
- (id)commonTypeDict_DateFormat;
- (id)commonTypeDict_StringFormat;
- (id)commonTypeDict_RealFormat_aggregateFunction_sum;
- (id)commonTypeDict_RealFormat_withUnit_mWhr;
- (id)commonTypeDict_RealFormat_withUnit_mW;
- (id)commonTypeDict_RealFormat_withUnit_mJ;
- (id)commonTypeDict_RealFormat_withUnit_s;
- (id)commonTypeDict_RealFormat;
- (id)commonTypeDict_IntegerFormat_aggregateFunction_sum;
- (id)commonTypeDict_IntegerFormat_withUnit_mAh;
- (id)commonTypeDict_IntegerFormat_withUnit_mA;
- (id)commonTypeDict_IntegerFormat_withUnit_mV;
- (id)commonTypeDict_IntegerFormat_withUnit_us;
- (id)commonTypeDict_IntegerFormat_withUnit_ms;
- (id)commonTypeDict_IntegerFormat_withUnit_s;
- (id)commonTypeDict_IntegerFormat;
- (id)commonTypeDict_BoolFormat;

@end

