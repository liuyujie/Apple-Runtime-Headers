//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface SFAirDropTransferItem : NSObject <NSSecureCoding>
{
    _Bool _isFile;
    NSString *_type;
    int _count;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool isFile; // @synthesize isFile=_isFile;
@property(readonly, nonatomic) int count; // @synthesize count=_count;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)incrementCount;
- (id)initWithType:(id)arg1 isFile:(_Bool)arg2;
- (id)init;

@end

