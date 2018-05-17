//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface TVHKMediaEntityIdentifier : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _protocol;
}

+ (_Bool)supportsSecureCoding;
+ (id)mediaEntityIdentifierWithProtocol:(unsigned long long)arg1 persistentID:(unsigned long long)arg2;
+ (id)mediaEntityIdentifierWithStringRepresentation:(id)arg1;
@property(nonatomic) unsigned long long protocol; // @synthesize protocol=_protocol;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringRepresentation;
- (id)initWithProtocol:(unsigned long long)arg1;
- (id)init;

@end
