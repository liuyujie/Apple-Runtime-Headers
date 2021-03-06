//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class IKMutableArray;

@interface IKCSSSelectorList : NSObject <NSCopying>
{
    IKMutableArray *_selectors;
}

@property(readonly, nonatomic) IKMutableArray *selectors; // @synthesize selectors=_selectors;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (id)lastSelector;
- (id)firstSelector;
- (id)selectorAtIndex:(unsigned long long)arg1;
- (void)addSelector:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

