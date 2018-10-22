//
// ���Ɖ�]�p����P�ʎl���������߂�
//
//   q �� �� (x, y, z) �p�x (a)
//
extern void qmake(float *q, float x, float y, float z, float a);

//
// �l�����̐ς����߂�
//
//   p �� q * r
//
extern void qmul(float *p, const float *q, const float *r);

//
// �l���������]�ϊ��s������߂�
//
//   m �� �l���� q
//
extern void qrot(GLfloat *m, const float *q);

//
// ���ʐ��`���
//
//   p �� �l���� q �� �l���� r �� t �ŕ�Ԃ���
//
extern void slerp(float *p, const float *q, const float *r, float t);

//
// �����̃N�H�[�^�j�I���Ԃ̋��ʐ��`��ԁi�܂���j
//
//   p �� t[i] �ɂ�����N�H�[�^�j�I�� q[i], 0 <= i < n �ɑ΂��� u �ɂ������Ԓl
//
extern void mslerp(float *p, const float *t, const float (*q)[4], int n, float u);
