//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TVHomeSharingKit/TVHKMediaEntityIdentifier.h>

#import "NSSecureCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TVHKDAAPShowMediaCollectionIdentifier : TVHKMediaEntityIdentifier <NSSecureCoding>
{
    NSString *_showTitle;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *showTitle; // @synthesize showTitle=_showTitle;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShowTitle:(id)arg1;
- (id)initWithProtocol:(unsigned long long)arg1;

@end

