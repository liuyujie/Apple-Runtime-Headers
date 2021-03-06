//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate;

@interface NWKRoutineDateInterval : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *_entryDate;
    NSDate *_exitDate;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDate *exitDate; // @synthesize exitDate=_exitDate;
@property(retain, nonatomic) NSDate *entryDate; // @synthesize entryDate=_entryDate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToRoutineDateInterval:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)initWithEntryDate:(id)arg1 exitDate:(id)arg2;

@end

