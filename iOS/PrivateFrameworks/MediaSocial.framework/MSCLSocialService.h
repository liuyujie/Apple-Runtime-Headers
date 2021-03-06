//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface MSCLSocialService : NSObject <NSCopying>
{
    NSString *_identifier;
    long long _maximumNumberOfCharacters;
    NSString *_storeItemIdentifier;
}

@property(copy, nonatomic) NSString *storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;
@property(nonatomic) long long maximumNumberOfCharacters; // @synthesize maximumNumberOfCharacters=_maximumNumberOfCharacters;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithServiceDictionary:(id)arg1;

@end

