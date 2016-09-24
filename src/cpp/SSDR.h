#ifndef SSDR_H
#define SSDR_H
#pragma once

#include <vector>
#include <maya/MPoint.h>
#include <maya/MMatrix.h>
#include <maya/MQuaternion.h>
#include <maya/MTransformationMatrix.h>

namespace SSDR
{
    // ���̓f�[�^�\����
    struct Input
    {
        //! ���_��
        int numVertices;
        //! �Ꭶ�f�[�^��
        int numExamples;
        //! �o�C���h���_���W�i���_���j
        std::vector<MPoint> bindModel;
        //! �Ꭶ�`�󒸓_���W (�Ꭶ�f�[�^�� x ���_���j
        std::vector<MPoint> sample;

        Input() : numVertices(0), numExamples(0) {}
        ~Input() {}
    };

    // �o�̓f�[�^�\����
    struct Output
    {
        //! �{�[����
        int numBones;
        //! �X�L�j���O�E�F�C�g�i���_�� x �C���f�N�X���j
        std::vector<double> weight;
        //! �C���f�N�X�i���_�� x �C���f�N�X���j
        std::vector<int> index;
        //! �X�L�j���O�s��i�Ꭶ�f�[�^�� x �����j
        std::vector<MTransformationMatrix> boneTrans;
    };

    // �v�Z�p�����[�^�\����
    struct Parameter
    {
        //! �ŏ��{�[����
        int numMinBones;
        //! ���_���Ƀo�C���h�����ő�{�[����
        int numMaxInfluences;
        //! �ő唽����
        int numMaxIterations;
    };

    extern double Decompose(Output& output, const Input& input, const Parameter& param);
    extern double ComputeApproximationErrorSq(const Output& output, const Input& input, const Parameter& param);
}

#endif //SSDR_H
