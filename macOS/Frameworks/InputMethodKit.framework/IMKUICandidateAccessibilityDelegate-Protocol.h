//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IMKUICandidateAccessibilityElement, NSArray;

@protocol IMKUICandidateAccessibilityDelegate
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)moveAccessibilityElementToVisibleArea:(IMKUICandidateAccessibilityElement *)arg1;
- (NSArray *)visibleCandidateAccessibilityElements;
- (NSArray *)allCandidateAccessibilityElements;
- (IMKUICandidateAccessibilityElement *)selectedCandidateAccessibilityElement;
@end
