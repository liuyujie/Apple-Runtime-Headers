//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AnnotationKit/AKMinimalUserInterfaceItem.h>

#import "AKColorChooserUserInterfaceItem.h"

@class NSColor, NSString;

@interface AKMinimalColorChooserUserInterfaceItem : AKMinimalUserInterfaceItem <AKColorChooserUserInterfaceItem>
{
    NSColor *_color;
}

@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
