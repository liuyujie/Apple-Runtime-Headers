//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface SiriTVUIGroupViewFitInfo : NSObject
{
    NSMapTable *_viewsToFitSizes;
    struct CGSize _totalFitSize;
}

@property(nonatomic) struct CGSize totalFitSize; // @synthesize totalFitSize=_totalFitSize;
@property(copy, nonatomic) NSMapTable *viewsToFitSizes; // @synthesize viewsToFitSizes=_viewsToFitSizes;
- (void).cxx_destruct;

@end
