//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSSet;

@interface TUMomentsCapabilities : NSObject <NSSecureCoding>
{
    int _availability;
    NSSet *_supportedMediaTypes;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSSet *supportedMediaTypes; // @synthesize supportedMediaTypes=_supportedMediaTypes;
@property(readonly, nonatomic) int availability; // @synthesize availability=_availability;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToCapabilities:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)initWithAvailability:(int)arg1 supportedMediaTypes:(id)arg2;

@end

