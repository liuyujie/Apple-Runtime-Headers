//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Messages/MSMessageLayout.h>

#import "NSSecureCoding.h"

@class MSMessageTemplateLayout;

@interface MSMessageLiveLayout : MSMessageLayout <NSSecureCoding>
{
    MSMessageTemplateLayout *_alternateLayout;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) MSMessageTemplateLayout *alternateLayout; // @synthesize alternateLayout=_alternateLayout;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAlternateLayout:(id)arg1;
- (id)init;

@end

