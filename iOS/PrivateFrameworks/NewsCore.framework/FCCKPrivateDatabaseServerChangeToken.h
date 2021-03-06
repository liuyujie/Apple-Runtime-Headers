//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary;

@interface FCCKPrivateDatabaseServerChangeToken : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_changeTokensByDestinationKey;
}

+ (id)_keyForDestination:(long long)arg1;
+ (id)tokenByAddingCKToken:(id)arg1 forDestination:(long long)arg2 toToken:(id)arg3;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *changeTokensByDestinationKey; // @synthesize changeTokensByDestinationKey=_changeTokensByDestinationKey;
- (void).cxx_destruct;
- (id)changeTokenForDestination:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithChangeTokensByDestination:(id)arg1;
- (id)initWithChangeTokensByDestinationKey:(id)arg1;

@end

