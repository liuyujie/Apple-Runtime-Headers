//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, TVCKStoreLookupItem;

__attribute__((visibility("hidden")))
@interface TVCKStoreItemInfo : NSObject
{
    TVCKStoreLookupItem *_requestedItem;
    NSSet *_leafItems;
}

@property(copy, nonatomic) NSSet *leafItems; // @synthesize leafItems=_leafItems;
@property(retain, nonatomic) TVCKStoreLookupItem *requestedItem; // @synthesize requestedItem=_requestedItem;
- (void).cxx_destruct;

@end
