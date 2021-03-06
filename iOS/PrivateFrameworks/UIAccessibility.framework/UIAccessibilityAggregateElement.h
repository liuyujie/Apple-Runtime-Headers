//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAccessibilityElement.h"

@class NSArray;

@interface UIAccessibilityAggregateElement : UIAccessibilityElement
{
    NSArray *_representedElements;
}

@property(retain, nonatomic) NSArray *representedElements; // @synthesize representedElements=_representedElements;
- (void).cxx_destruct;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (void)addRepresentedObject:(id)arg1;
- (id)initWithAccessibilityContainer:(id)arg1 representedElements:(id)arg2;
- (id)initWithAccessibilityContainer:(id)arg1;

@end

