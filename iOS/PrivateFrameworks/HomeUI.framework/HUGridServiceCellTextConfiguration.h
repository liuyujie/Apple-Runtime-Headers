//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HFServiceNameComponents, UIColor, UIVisualEffect;

@interface HUGridServiceCellTextConfiguration : NSObject
{
    HFServiceNameComponents *_nameComponents;
    id <HFStringGenerator> _descriptionText;
    UIColor *_nameTextColor;
    UIColor *_descriptionTextColor;
    UIVisualEffect *_descriptionTextEffect;
}

@property(retain, nonatomic) UIVisualEffect *descriptionTextEffect; // @synthesize descriptionTextEffect=_descriptionTextEffect;
@property(retain, nonatomic) UIColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
@property(retain, nonatomic) UIColor *nameTextColor; // @synthesize nameTextColor=_nameTextColor;
@property(retain, nonatomic) id <HFStringGenerator> descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) HFServiceNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
- (void).cxx_destruct;

@end
