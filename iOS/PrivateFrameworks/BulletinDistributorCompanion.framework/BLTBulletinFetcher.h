//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface BLTBulletinFetcher : NSObject
{
    NSDictionary *_bulletinIDs;
    NSArray *_sectionIDs;
    long long _sectionIDsIndex;
    NSArray *_publisherMatchIDsForSection;
    unsigned long long _publisherMatchIDsForSectionIndex;
    CDUnknownBlockType _clientCompletion;
    CDUnknownBlockType _fetcher;
}

+ (id)batchBulletinFetchForBulletinIDs:(id)arg1 fetcher:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_fetchBulletins;
- (_Bool)_incrementSection;
- (void)_setBulletinIDs:(id)arg1;
- (void)_setClientCompletion:(CDUnknownBlockType)arg1;
- (void)_setFetcher:(CDUnknownBlockType)arg1;

@end

