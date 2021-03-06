//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesCloud/ICRadioContentReference.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSNumber;

@interface ICRadioStoreContentReference : ICRadioContentReference <NSCopying, NSSecureCoding>
{
    NSNumber *_storeIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSNumber *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)matchDictionary;
- (id)initWithStoreIdentifier:(id)arg1;

@end

