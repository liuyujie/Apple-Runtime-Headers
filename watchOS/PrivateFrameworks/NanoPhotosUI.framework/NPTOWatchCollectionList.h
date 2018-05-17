//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray;

@interface NPTOWatchCollectionList : NSObject <NSCopying>
{
    NSArray *_watchCollections;
}

+ (id)sharedWatchCollectionList;
- (void).cxx_destruct;
- (id)_readWatchCollectionListFromPreferences;
- (void)updateWatchCollectionList;
- (id)collectionsForTarget:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initFromPreferences;
- (void)writeWatchCollectionListToPreferences;
- (void)setWatchCollections:(id)arg1;
- (id)watchCollections;

@end
