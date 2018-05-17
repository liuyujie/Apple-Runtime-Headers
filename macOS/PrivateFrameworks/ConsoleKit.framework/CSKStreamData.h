//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSKEntity, CSKStreamSortedData;

@interface CSKStreamData : NSObject
{
    id <CSKStreamDataDelegate> _delegate;
    unsigned long long _capacity;
    unsigned long long _direction;
    CSKEntity *_keyEntity;
    CSKStreamSortedData *_sortedData;
    unsigned long long _objectsCount;
}

@property(nonatomic) unsigned long long objectsCount; // @synthesize objectsCount=_objectsCount;
@property(readonly, nonatomic) CSKStreamSortedData *sortedData; // @synthesize sortedData=_sortedData;
@property(nonatomic) __weak CSKEntity *keyEntity; // @synthesize keyEntity=_keyEntity;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(nonatomic) __weak id <CSKStreamDataDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)debugDescription;
- (struct _NSRange)_rangeForListCount:(unsigned long long)arg1 targetCount:(unsigned long long)arg2 direction:(unsigned long long)arg3;
- (id)_popActivitiesFromSortedData:(unsigned long long)arg1 direction:(unsigned long long)arg2;
- (id)_popMessagesFromSortedData:(unsigned long long)arg1 direction:(unsigned long long)arg2;
- (id)_removeFromSortedDataMessagesRelatedToActivities:(id)arg1;
- (id)_removeFromSortedDataActivitiesRelatedToMessages:(id)arg1;
- (Class)_sortedDataEntityClassEligibleForRemoval;
- (BOOL)_isCapacityReached;
- (id)_keyEntityFromMessages:(id)arg1 activities:(id)arg2 direction:(unsigned long long)arg3;
- (id)allActivities;
- (id)allMessages;
- (void)removeEntitiesCount:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addEntities:(id)arg1 direction:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end
