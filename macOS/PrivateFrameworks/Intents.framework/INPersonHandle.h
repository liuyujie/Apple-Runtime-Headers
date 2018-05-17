//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INPersonHandleExport.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface INPersonHandle : NSObject <INPersonHandleExport, NSCopying, NSSecureCoding>
{
    NSString *_value;
    long long _type;
    NSString *_label;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSString *label; // @synthesize label=_label;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly, copy) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3;
- (id)initWithValue:(id)arg1 type:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
