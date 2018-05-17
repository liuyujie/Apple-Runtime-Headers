//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPMusicPlayerQueueDescriptor.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface MPMusicPlayerStoreQueueDescriptor : MPMusicPlayerQueueDescriptor
{
    NSArray *_storeIDs;
    NSMutableDictionary *_storeFronts;
    NSString *_startItemID;
    NSDictionary *_assetStoreFronts;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *assetStoreFronts; // @synthesize assetStoreFronts=_assetStoreFronts;
@property(copy, nonatomic) NSString *startItemID; // @synthesize startItemID=_startItemID;
@property(copy, nonatomic) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
- (void).cxx_destruct;
- (void)setSourceStorefront:(id)arg1 forItemWithStoreID:(id)arg2;
- (void)setEndTime:(double)arg1 forItemWithStoreID:(id)arg2;
- (void)setStartTime:(double)arg1 forItemWithStoreID:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreIDs:(id)arg1;

@end
