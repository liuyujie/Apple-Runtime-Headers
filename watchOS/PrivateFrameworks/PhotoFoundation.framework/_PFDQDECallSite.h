//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSData;

@interface _PFDQDECallSite : NSObject <NSCopying>
{
    NSData *_addresses;
    NSArray *_symbols;
}

+ (id)currentCallSite;
+ (void)initialize;
- (void).cxx_destruct;
- (id)backtraceWithPrefix:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAddresses:(id)arg1;

@end

