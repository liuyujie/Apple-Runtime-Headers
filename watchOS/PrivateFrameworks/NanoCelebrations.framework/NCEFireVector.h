//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NCECelebration, NSDate;

@interface NCEFireVector : NSObject <NSCopying>
{
    NCECelebration *_celebration;
    NSDate *_onOrAfter;
}

@property(retain, nonatomic) NSDate *onOrAfter; // @synthesize onOrAfter=_onOrAfter;
@property(retain, nonatomic) NCECelebration *celebration; // @synthesize celebration=_celebration;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
@property(readonly, nonatomic) _Bool highPriority;

@end

