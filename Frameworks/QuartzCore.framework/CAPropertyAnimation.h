/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CAValueFunction, NSString;

@interface CAPropertyAnimation : CAAnimation {
}

@property(getter=isAdditive) BOOL additive;
@property(getter=isCumulative) BOOL cumulative;
@property(copy) NSString * keyPath;
@property(retain) CAValueFunction * valueFunction;

+ (id)animationWithKeyPath:(id)arg1;

- (id)TSDCAAnimationContextCache;
- (id)TSD_animationForKeyPath:(id)arg1 atTime:(double)arg2;
- (double)TSD_animationPercentFromAnimationTime:(double)arg1;
- (BOOL)TSD_containsAnimationForKeyPath:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (BOOL)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; void *x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)arg1 layer:(id)arg2;
- (BOOL)additive;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (BOOL)cumulative;
- (BOOL)isAdditive;
- (BOOL)isCumulative;
- (id)keyPath;
- (id)p_adjustedResultWithValue:(id)arg1 contextCache:(id)arg2;
- (double)p_animationPercentFromAnimationTime:(double)arg1 contextCache:(id)arg2;
- (void)setAdditive:(BOOL)arg1;
- (void)setCumulative:(BOOL)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setValueFunction:(id)arg1;
- (id)valueFunction;

@end
