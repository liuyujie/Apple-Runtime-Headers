//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface TVApplicationProxyIconCacheKey : NSObject <NSCopying>
{
    NSString *_applicationIdentifier;
    NSString *_lifetimeCacheKeyString;
    NSString *_applicationIconName;
}

+ (id)iconCacheKeyForProxy:(id)arg1;
@property(copy, nonatomic) NSString *applicationIconName; // @synthesize applicationIconName=_applicationIconName;
@property(copy, nonatomic) NSString *lifetimeCacheKeyString; // @synthesize lifetimeCacheKeyString=_lifetimeCacheKeyString;
@property(readonly, copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *filesystemSafeKeyName;
- (id)_init;
- (id)init;

@end

