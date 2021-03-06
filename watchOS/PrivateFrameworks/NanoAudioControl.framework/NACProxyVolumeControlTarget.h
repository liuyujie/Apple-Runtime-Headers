//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface NACProxyVolumeControlTarget : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_originIdentifier;
    NSString *_category;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isValidOriginIdentifier:(id)arg1;
+ (id)volumeControlTargetWithOriginIdentifier:(id)arg1;
+ (id)volumeControlTargetWithCategory:(id)arg1;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSNumber *originIdentifier; // @synthesize originIdentifier=_originIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic, getter=isPairedDevice) _Bool pairedDevice;
- (id)initWithOriginIdentifier:(id)arg1 category:(id)arg2;

@end

