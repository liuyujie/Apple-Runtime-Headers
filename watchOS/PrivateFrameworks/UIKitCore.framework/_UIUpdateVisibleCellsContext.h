//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIUpdateVisibleCellsContext : NSObject
{
    NSMutableArray *_sizes;
    NSMutableArray *_indexPaths;
}

@property(readonly, nonatomic) NSArray *indexPaths; // @synthesize indexPaths=_indexPaths;
@property(readonly, nonatomic) NSArray *sizes; // @synthesize sizes=_sizes;
- (void).cxx_destruct;
- (id)description;
- (_Bool)shouldInvalidate;
- (void)addSize:(struct CGSize)arg1 forIndexPath:(id)arg2;
- (id)init;

@end

