//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol NTKComplicationDisplay <NSObject>
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;

@optional
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)setEditing:(_Bool)arg1;
- (void)setMaxSize:(struct CGSize)arg1;
@end

