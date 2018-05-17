//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCRecordSource.h>

@class NSArray;

@interface FCTagRecordSource : FCRecordSource
{
    NSArray *_genericKeys;
    unsigned long long _desiredFieldOptions;
}

+ (id)defaultCachePolicy;
+ (unsigned long long)highThresholdDataSizeLimit;
+ (unsigned long long)lowThresholdDataSizeLimit;
+ (unsigned long long)storeVersion;
+ (id)storeFilename;
+ (id)recordType;
@property(nonatomic) unsigned long long desiredFieldOptions; // @synthesize desiredFieldOptions=_desiredFieldOptions;
- (id)genericKeys;
- (void).cxx_destruct;
- (id)saveTagRecords:(id)arg1;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)localizedKeysByOriginalKey;
- (id)localizableKeys;
- (id)experimentalizedKeysByOriginalKey;
- (id)experimentalizableKeys;
- (id)desiredKeys;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 desiredTagRecordFieldOptions:(unsigned long long)arg3;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 experimentalizableFieldsPostfix:(id)arg3 activeTreatmentID:(id)arg4;

@end
