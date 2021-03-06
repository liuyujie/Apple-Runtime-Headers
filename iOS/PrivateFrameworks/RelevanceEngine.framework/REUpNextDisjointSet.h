//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMapTable;

@interface REUpNextDisjointSet : NSObject <NSCopying>
{
    NSMapTable *_nodes;
}

- (void).cxx_destruct;
- (id)description;
- (_Bool)isItem:(id)arg1 connectedToItem:(id)arg2;
- (id)allItemsConnectedToItem:(id)arg1;
- (_Bool)containsItem:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (void)connectItem:(id)arg1 withItem:(id)arg2;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

